#include <stdio.h>
#include <string.h>

int main(){
	int cat=0, dog=0;
	char s[1000], *catpos=s, *dogpos=s;
	scanf("%[^\n]", s);
	while(catpos || dogpos){
		if(catpos) catpos = strstr(catpos, "cat");
		if(catpos){
			cat++;
			catpos++;
		}
		if(dogpos) dogpos = strstr(dogpos, "dog");
		if(dogpos){
			dog++;
			dogpos++;
		}
	}
	if(cat==dog) printf("egyensuly\n");
	return 0;
}

