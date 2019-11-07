#include<stdio.h>

void swap1(int, int);
void swap2(int*, int*);
void swap3(int*, int*);
/*
void swap3(int[], int[]); also means the same
*/

void swap1(int x, int y) {

   int temp;

   temp = x; /* save the value of x */
   x = y;    /* put y into x */
   y = temp; /* put temp into y */
  
   return;
}

void swap2(int *x, int *y) {

   int temp;
   temp = *x;    /* save the value at address x */
   *x = *y;      /* put y into x */
   *y = temp;    /* put temp into y */
  
   return;
}

void swap3(int arr1[], int arr2[]) {
    int i, temp;
    /* NOTE: the sizeof trick won't work in case of function 
             parameters (calculated at compile time)
       printf("%d\n", sizeof(arr1)/sizeof(arr1));
    */
    for(i = 0; i<3; i++) {
        temp = arr1[i];
        arr1[i] = arr2[i];
        arr2[i] = temp;
    }
}

int main() {

    int a = 100, b = 200;
    
    swap1(a,b);
    
    printf("a: %d, b: %d\n", a, b);
    
    swap2(&a,&b);
    
    printf("a: %d, b: %d\n", a, b);
    
    int arr1[] = {10,20,30};
    int arr2[] = {60,70,80};
    
    swap3(arr1, arr2);
    
    printf("arr1[0]: %d | arr2[0] : %d", arr1[0], arr2[0]);

    return 0;
}