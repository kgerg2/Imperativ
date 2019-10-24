#include <stdio.h>
#include <string.h>

int main(){
	int db=0;
	char s[1000], *co=s-1;
	scanf("%[^\n]", s);
	while(co++){
		co = strstr(co, "co");
		if(co && co[3]=='e'){
			db++;
		}
	}
	printf("%d\n", db);
	return 0;
}

