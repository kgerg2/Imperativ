#include <stdio.h>
#define N 100

int main(){
	int matr[N][N], sor, oszl, i=0, j=0;
	
	scanf("%d %d", &sor, &oszl);
	if(sor > N || oszl > N) return 0;
	
	for(i=0; i<sor; i++){
		for(j=0; j<oszl; j++){
			scanf("%d", &matr[j][i]);
		}
	}
 	for(i=0; i<oszl; i++){
		for(j=0; j<sor; j++){
			printf("%d ", matr[i][j]);
		}
		printf("\n");
	}
	return 0;
}

