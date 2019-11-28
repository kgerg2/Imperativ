#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct felhasznalok
{
    char nev[200];
    int telefondb;
    struct telefonok *telefon[10];
};

struct telefonok
{
    char szam[20];
    struct felhasznalok *tulajdonos;
};

void ujfelh(struct felhasznalok felh[100], int *felhdb)
{
    char nev[200];
    printf("Felhasználó neve: ");
    scanf(" %[^\n]", nev);
    int j = 0;
    while (j < *felhdb && strcmp(nev, felh[j].nev))
    {
        j++;
    }
    if (j == *felhdb)
    {
        strcpy(felh[*felhdb].nev, nev);
        felh[*felhdb].telefondb = 0;
        (*felhdb)++;
    }
}

void ujtel(struct telefonok *tel[100], int *teldb)
{
    char telszam[20];
    printf("Telefonszám: ");
    scanf(" %[^\n]", telszam);
    int j = 0;
    while (j < *teldb && strcmp(telszam, tel[j]->szam))
    {
        j++;
    }
    if (j == *teldb)
    {
        tel[*teldb] = malloc(sizeof(struct telefonok));
        strcpy(tel[*teldb]->szam, telszam);
        tel[*teldb]->tulajdonos = NULL;
        (*teldb)++;
    }
}

void tulvalt(struct felhasznalok felh[100], int *felhdb, struct telefonok *tel[100], int *teldb)
{
    char telszam[20], nev[200];
    printf("Telefonszám: ");
    scanf(" %[^\n]", telszam);
    int j = 0;
    while (j < *teldb && strcmp(telszam, tel[j]->szam))
    {
        j++;
    }
    if (j < *teldb)
    {
        int k = 0;
        if (tel[j]->tulajdonos)
        {
            while (k < tel[j]->tulajdonos->telefondb && strcmp(tel[j]->tulajdonos->telefon[k]->szam, telszam))
            {
                k++;
            }
            free(tel[j]->tulajdonos->telefon[k]);
            strcpy(tel[j]->tulajdonos->telefon[k]->szam, tel[j]->tulajdonos->telefon[tel[j]->tulajdonos->telefondb - 1]->szam);
            tel[j]->tulajdonos->telefondb--;
        }
        printf("Új tulajdonos: ");
        scanf(" %[^\n]", nev);
        while (k < *felhdb && strcmp(nev, felh[k].nev))
        {
            k++;
        }
        if (k < *felhdb)
        {
            felh[k].telefon[felh[k].telefondb] = malloc(sizeof(struct telefonok));
            strcpy(felh[k].telefon[felh[k].telefondb]->szam, telszam);
            tel[j] = felh[k].telefon[felh[k].telefondb];
            felh[k].telefondb++;
        }
        else
        {
            strcpy(felh[*felhdb].nev, nev);
            felh[*felhdb].telefon[0] = malloc(sizeof(struct telefonok));
            strcpy(felh[*felhdb].telefon[0]->szam, telszam);
            felh[*felhdb].telefon[0]->tulajdonos = felh + *felhdb;
            felh[*felhdb].telefondb = 1;
            tel[j] = felh[*felhdb].telefon[0];
            (*felhdb)++;
        }
    }
}

void vetel(struct felhasznalok felh[100], int *felhdb, struct telefonok *tel[100], int *teldb)
{
    char nev[200];
    printf("Felhasználó neve: ");
    scanf(" %[^\n]", nev);
    int j = 0;
    while (j < *felhdb && strcmp(nev, felh[j].nev))
    {
        j++;
    }
    if (j < *felhdb)
    {
        printf("Telefonszáma: ");
        felh[j].telefon[felh[j].telefondb] = malloc(sizeof(struct telefonok));
        scanf(" %[^\n]", felh[j].telefon[felh[j].telefondb]->szam);
        felh[j].telefon[felh[j].telefondb]->tulajdonos = felh + j;
        tel[*teldb] = felh[j].telefon[felh[j].telefondb];
        felh[j].telefondb++;
    }
    else
    {
        strcpy(felh[*felhdb].nev, nev);
        printf("Telefonszáma: ");
        felh[*felhdb].telefon[0] = malloc(sizeof(struct telefonok));
        scanf(" %[^\n]", felh[*felhdb].telefon[0]->szam);
        felh[*felhdb].telefon[0]->tulajdonos = felh + *felhdb;
        felh[*felhdb].telefondb = 1;
        tel[*teldb] = felh[*felhdb].telefon[0];
        (*felhdb)++;
    }
}

void kiir(struct felhasznalok felh[100], int felhdb)
{
    for (int i = 0; i < felhdb; i++)
    {
        printf("%s:", felh[i].nev);
        for (int j = 0; j < felh[i].telefondb; j++)
        {
            printf(" %s,", felh[i].telefon[j]->szam);
        }
        printf("\b\n");
    }
}

int main()
{
    int hossz, felhdb, teldb;
    struct felhasznalok felh[100];
    struct telefonok *tel[100];
    printf("Add meg a felhasználók számát: ");
    scanf("%d", &hossz);
    if (hossz > 100)
    {
        printf("Maximum 100 felhasználó lehetséges.\n");
        return 1;
    }
    felhdb = 0;
    for (int i = 0; i < hossz; i++)
    {
        vetel(felh, &felhdb, tel, &i);
    }
    teldb = hossz;
    tulvalt(felh, &felhdb, tel, &teldb);
    kiir(felh, felhdb);
    return 0;
}
