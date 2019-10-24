#include <stdio.h>

int main(){
	int i;
	float min, max, l[10];
	for(i=0; i<10; i++){
		scanf(" %f", &l[i]);
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
