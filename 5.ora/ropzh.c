#include <stdio.h>

int main(){
	int i = 1;
	do {
			printf("Fut: %d\n", i--);
			i+=2;
	} while(++i<5);
		
	printf("==========\n");
		
	for(i=3; (i+++ ++i); i-=2) {
			printf("Fut: %d\n", --i);
	}
		
	printf("==========\n");
		
	for(i=0;++i<5;i--) {
			i++;
			printf("Fut: %d\n", (i++)-1);
	}
	return 0;
}
