#include <stdio.h>
#include <string.h>

int long_sleep(int weekday, int vacation){
	return !weekday || vacation;
}

int makes10(int a, int b){
	return a == 10 || b == 10 || a+b == 10;
}

int sum_double(int a, int b){
	/*if(a == b) return (a+b) * 2;
	return a + b;*/
	return (a+b) * (1 + (a==b));
}

void not_string(char* str){
	if(str[0] == 'n' && str[1] == 'o' && str[2] == 't'){
		printf("%s\n", str);
	} else{
		printf("not %s\n", str);
	}
}

int randi_fashion(int a, int b){
	if(a <= 2 || b <= 2) return 0;
	if(a >= 8 || b >= 8) return 2;
	return 1;
}

int main(){
	int fv, a, b;
	char szoveg[100];
	/*printf("1 - long_sleep: %d\n", long_sleep(1, 1));
	printf("2 - makes10: %d\n", makes10(10, 1));
	printf("3 - sum_double: %d\n", sum_double(4, 3));
	printf("4 - not_string: ");
	not_string("not alma");*/
	printf("1 - long_sleep\n");
	printf("2 - makes10\n");
	printf("3 - sum_double\n");
	printf("4 - not_string\n");
	printf("5 - randi_fasihon\n");
	printf("kilepes: 0\n");
	fv = 0;
	do {
		printf("Add meg a kert fuggveny szamat: ");
		scanf("%d", &fv);
		if(fv != 4 && fv > 0 && fv <= 5){
			printf("Add meg a bemeneti szamokat szokozzel elvalasztva: ");
			scanf("%d %d", &a, &b);
		} else if(fv == 4){
			printf("Add meg a bemeneti szoveget: ");
			scanf(" %[^\n]", szoveg);
		}
		switch(fv){
			case 0:
				printf("Viszlat!\n");
			case 1:
				printf("%d\n", long_sleep(a, b));
				break;
			case 2:
				printf("%d\n", makes10(a, b));
				break;
			case 3:
				printf("%d\n", sum_double(a, b));
				break;
			case 4:
				not_string(szoveg);
				break;
			case 5:
				printf("%d\n", randi_fashion(a, b));
				break;
			default:
				printf("Nem megfelelo szam. Adj meg egyet a felsoroltak kozul.\n");
		}
	} while(fv);
	return 0;
}
