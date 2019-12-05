#include<stdio.h>
#include<stdlib.h>

struct Szerzo {
	int eletkor;
	double ertekeles;
};

struct Konyv {
	int kiadas_eve;
	struct Szerzo *szerzo;
	char cim[100];
};

int main() {
    struct Konyv *k = malloc(sizeof(struct Konyv));
    struct Szerzo s = {12, 4.76};
    k->kiadas_eve = 1987;
    k->szerzo = &s;
    k->cim[0] = 'a';

    printf("%d, %f, %d, %s", k->szerzo->eletkor, k->szerzo->ertekeles
          , k->kiadas_eve, k->cim);

    free(k);
    return 0;
}
