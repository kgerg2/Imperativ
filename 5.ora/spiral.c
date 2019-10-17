#include <stdio.h>
#define N 100
#define M 100

int kovetkezo(int elozo, int sor, int oszl){
	if()
}

int main(){
	int matr[N][M], uj, sor, oszl, i=0, j=0, kov;
	
	scanf("%d %d", &sor, &oszl);
	if(sor > N || oszl > M) return 0;
	
	for(i=0; i<sor; i++){
		for(j=0; j<oszl; j++){
			scanf("%d", &matr[i][j]);
		}
	}

	kov = 0;
	while((kov = kovetkezo(kov, sor, oszl)) > -1){
		printf("%d ", matr[kov]);
	}
	return 0;
}

