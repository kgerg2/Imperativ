#include <stdio.h>

int main(){
	int i;
	float min, max, l[10];
	FILE *be;
	be = fopen("be.txt", "r");
	for(i=0; i<10; i++){
		fscanf(be, " %f", &l[i]);
		if(i == 0){
			min = max = l[i];
		} else{
			if(l[i] > max)
				max = l[i];
			if(l[i] < min)
				min = l[i];
		}
			
	}
	printf("%f\n", max-min);
	return 0;
}
