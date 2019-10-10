#include <stdio.h>

/*char csere(char c){
	switch (c){
		case 'a':
			return 'e';
		case 'e':
			return 'i';
		case 'i':
			return 'o';
		case 'o':
			return 'u';
		case 'u':
			return 'a';
		default:
			return c;
	}
}*/

char l[7] = "aeioua";

char csere(char c){
	int i=0;
	while(i<5 && l[i]!=c){
		i++;
	}
	return i==5 ? c : l[i+1];
}

int main(){
	char c;
	int i;
	for(i=0; i<5; i++){
		c = getchar();
		if(c >= '0' && c <= '9') continue;
		putchar(csere(c));
	}
	
	return 0;
}
