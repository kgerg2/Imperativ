#include <stdio.h>

int main()
{

   int var = 20;  /* actual variable declaration */
   int *ip, *ip2; /* pointer variable declaration */

   ip = &var; /* store address of var in pointer variable*/
   ip2 = &var;

   printf("Address of var variable: %p\n", &var);

   /* address stored in pointer variable */
   printf("Address stored in ip, ip2 variables: %p, %p\n", ip, ip2);

   /* access the value using the pointer */
   printf("Value of *ip, *ip2 variables: %d, %d\n", *ip, *ip2);

   var = 13;

   /* access the value using the pointer */
   printf("Value of *ip, *ip2 variables: %d, %d\n", *ip, *ip2);

   return 0;
}