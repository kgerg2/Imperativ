#include <stdlib.h>
#include <stdio.h>

#define CNT 3

int fun(int* s, int* a, int e) {
	static int b = 1;
	if (b) b = *s = 0;
    *s += e;
    *a = *s / CNT;
    return 0;
}

int main() {
    int i, j, sum, avg;
    for(i=0; i<CNT; i++) {
        scanf("%d", &j);
        fun(&sum, &avg, j);
    }
    printf("Sum: %d\n", sum);
    printf("Avg: %d\n", avg);
    return 0;
}
