
/*
 * Cyclic replacement of vowels: a->e, e->i, ..., u->a
 * with while statement: 
 *
 * should be improved: global arrays -> static local, loop condition, etc...
 */

#include <stdio.h>

struct pair {
	char from;
	char to;
} pairs[5] = {{'a', 'e'}, {'e', 'i'}, {'i', 'o'}, {'o', 'u'}, {'u', 'a'}};

char change( char ch )
{
  int i = 0;
  while ( i < 5 )
  {
    if ( pairs[i].from == ch )
      return pairs[i].to;
    ++i;
  }
  return ch;
}

int main()
{
  int ch;

  while ( (ch = getchar()) != '0' )
  {
    putchar( change(ch) );
  }
  return 0;
}
