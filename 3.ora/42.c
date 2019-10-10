#include <stdio.h>
#include <limits.h>

int main(){
	//char c;
	printf("%d\n", 42);
	printf("%d\n", 052);
	printf("%d\n", 0x2A);
	printf("%d\n", -(int)4294967254);
	printf("%d\n", (char)(43+INT_MAX));
	printf("%s\n", "42");
	printf("%c%c\n", '4', '2');
	printf("%d\n", (char)-214);
	printf("42\n");
	printf("%d\n", sizeof("12345678901234567890123456789012356789012"));
	return 0;
}

