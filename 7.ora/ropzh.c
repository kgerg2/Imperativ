#include <stdio.h>

int main(){
	int i, egyik, masik, eredmeny, uj;
	FILE *be;
	be = fopen("input.txt", "r");
	fscanf(be, "%d - %d | ", &egyik, &masik);
	eredmeny = 0;
	i = 1;
	while(!feof(be)){
		fscanf(be, "%1d", &uj);
		if(i==egyik) eredmeny += uj;
		if(i==masik) eredmeny -= uj;
		i++;
	}
	fclose(be);
	printf("%d\n", eredmeny);
	return 0;
}
