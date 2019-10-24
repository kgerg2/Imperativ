#include <stdio.h>

int main(){
	int i, sor[1000], hossz=0;
	char temp;
	do{
		scanf(" %d%c", &sor[hossz], &temp);
		for(i=0; i<hossz && sor[i] != sor[hossz]; i++);
		if(i==hossz) hossz++;
	} while(temp != '\n');
	for(i=0; i<hossz; i++) printf("%d ", sor[i]);
	printf("\n");
	return 0;
}
