#include <stdio.h>

int main(){
	char c;
	printf("Adj meg egy karaktert: ");
	scanf("%c", &c);							 // getchar
	if(c >= 'a' && c <= 'z') c += 'A'-'a';		 // toupper (ctype.h)
	printf("%c\n", c);							 // putchar
												 // puchar(toupper(getchar()));
	return 0;
}
