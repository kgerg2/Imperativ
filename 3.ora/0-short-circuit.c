#include <stdio.h>

int main()
{
  int i = 0;
  
  if (1 || (i=3) ) {
      printf("1: %d\n", i);
  }
  
  if (0 || (i=3) ) {
      printf("2: %d\n", i);
  }
  
  if (0 || (i=0) ) {
      printf("3: %d\n", i);
  }
  
  printf("4: %d\n", i);
  
  return 0;
}
