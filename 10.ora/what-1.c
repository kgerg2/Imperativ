#include <stdio.h> 

int main() 
{ 
    char a[] = { 'A', 'B', 'C', 'D' }; 
    char* p = &a[0]; 
    *p++;
    //printf("%c %c\n", a[0], a[1]);    
    printf("%c %c ", *++p, --*p); 

    return 0;
} 
