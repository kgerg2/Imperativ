#include <stdio.h>

char from[] = "aeiou";
char to[] = "eioua";

char csere(char c){
	int i=0;
	while(from[i]!='\0' && from[i]!=c){
		i++;
	}
	return from[i]!=c ? c : to[i];
}

int main(){
	unsigned char c, uj[256];
	int i;
	
	for(i=0; i<256; i++){
		uj[i] = i;
	}
	i=0;
	while(from[i]!='\0'){
		uj[from[i]] = to[i];
		i++;
	}
	
	
	while((c = getchar()) - 'A' > 0){
		if(c >= '0' && c <= '9') continue;
		putchar(uj[c]);
	}
	
	return 0;
}
