#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
	char s[1000];
	int i, betuk['z'-'a'+1];
	for(i=0; i<'z'-'a'+1; i++){
		betuk[i] = 0;
	}
	scanf("%[^.]", s);
	for(i=0; i<strlen(s); i++){
		if(tolower(s[i]) >= 'a' && tolower(s[i]) <= 'z') betuk[tolower(s[i])-'a'] = 1;
	}
	for(i=0; i<'z'-'a'+1 && betuk[i]==1; i++);
	printf("%d\n", i=='z'-'a'+1);
	return 0;
}

