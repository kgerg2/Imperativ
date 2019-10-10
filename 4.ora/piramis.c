#include <stdio.h>

int main(){
	int i, j, hossz;
	scanf("%d", &hossz);
	for(i=1; i<hossz; i++){
		for(j=0; j<hossz-i;j++){
			printf(" ");
		}
		for(j=0; j<i; j++){
			printf("* ");
		}
		printf("\n");
	}
	return 0;
}
