#include <stdio.h>

int main(){
    int arr[3], i = 0;
    arr[0] = 123;
    while(i < 3){
        arr[i] = i++;
    }
    for(i=0; i<5; i++){
        printf("%d, ", arr[i]);
    }
    return 0;
}
