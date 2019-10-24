#include <stdio.h>

int main(){
	float min, max, ossz=0, db=0, uj=1;
	while(uj != 0){
		scanf(" %f", &uj);
		if(db == 0){
			min = max = uj;
		} else{
			if(uj > max)
				max = uj;
			if(uj < min)
				min = uj;
		}
		ossz += uj;
		db++;
			
	}
	printf("%f\n", (ossz-max-min)/(db-2));
	return 0;
}

