#include <stdio.h>

int main(){
	int h, n, o, p;
	printf("Add meg a perceket: ");
	scanf("%d", &p);
	h = p / 10080;
	n = (p / 1440) % 7;
	o = (p / 60) % 24;
	p = p % 60;
	if(h>0) printf("%d het ", h);
	if(n>0) printf("%d nap ", n);
	if(o>0) printf("%d ora ", o);
	if(p>0) printf("%d perc", p);
	printf("\n");
	return 0;
}
