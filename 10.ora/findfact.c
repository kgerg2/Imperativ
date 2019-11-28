#include <stdio.h>

void findFact(int n, int *ert)
{
    if (n)
    {
        findFact(n - 1, ert);
        *ert *= n;
    }
    else
    {
        *ert = 1;
    }
}

int main()
{
    int n, f;
    scanf("%d", &n);
    findFact(n, &f);
    printf("%d\n", f);
    return 0;
}
