#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
	char s[1000], *co=s;
	scanf("%[^\n]", s);
	do{
		printf("%c", toupper(co[0]));
		co = strstr(co, " ");
	}while(co++);
	return 0;
}
