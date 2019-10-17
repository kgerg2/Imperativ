#include <stdio.h>

int main(){
    int arr[3][3] = { {1, 2, 3}, {4, 5, 6}, {7, 8, 9} };
    
    int *a = arr+1;
    printf("%d\n", *(a+1));
    a[4] = 15;
    
    printf("%d\n", arr[2][1]);
    return 0;
}
