#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	int szam, tipp, proba=0;
	srand((unsigned int)time(NULL));
	szam = rand()%10+1;
	printf("Add meg a szamot (1-10 kozott):\n");
	do{
		proba++;
		scanf("%d", &tipp);
		if(tipp < szam) printf("Tul kicsi.\n");
		if(tipp > szam) printf("Tul nagy.\n");
	} while(tipp != szam);
	printf("Eltalaltad!\n");
	if(proba == 1){
		printf("Latnok vagy?\n");}
	else if(proba <= 2){
		printf("Szerencsed volt.\n");}
	else if(proba <= 5){
		printf("Szep, logikusan haladsz!\n");}
	else{
		printf("Tudsz te ettol jobbat is!\n");}
	return 0;
}
