#include <stdio.h>
#define N 100
#define M 100

int main(){
	int matr[N][M], uj, sor, oszl, i=0, j=0;
	
	scanf("%d %d", &sor, &oszl);
	if(sor > N || oszl > M) return 0;
	
	for(i=0; i<sor; i++){
		for(j=0; j<oszl; j++){
			scanf("%d", &matr[i][j]);
		}
	}
	for(i=0; i<sor; i++){
		for(j=0; j<oszl; j++){
			scanf("%d", &uj);
			matr[i][j] += uj;
		}
	}
	for(i=0; i<sor; i++){
		for(j=0; j<oszl; j++){
			printf("%d ", matr[i][j]);
		}
		printf("\n");
	}
	return 0;
}
