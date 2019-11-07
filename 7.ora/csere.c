#include <stdio.h>

void csere(int **a, int **b){	
	*a ^= *b;
	*b ^= *a;
	*a ^= *b;
}

int main(){
	int a=100, b=150;
	int x[3] = {1, 2, 3}, y[2] = {10, 11};
	int *xx = x, *yy = y;
	//csere(&a, &b);
	csere(&xx, &yy);
	printf("%d %d\n", a, b);
	printf("[%d, %d] [%d, %d]\n", xx[0], xx[1], yy[0], yy[1]);
	return 0;
}
