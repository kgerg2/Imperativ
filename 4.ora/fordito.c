#include <stdio.h>

int main(){
	int i;
	char szam[1000];
	scanf("%[^\n]", szam);
	i = 0;
	while(szam[i] != '\0'){
		i++;
	}
	for(i--; i>=0; i--){
		printf("%c", szam[i]);
	}
	return 0;
}
