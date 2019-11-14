
/*
 * Cyclic replacement of vowels: a->e, e->i, ..., u->a
 * with while statement: 
 *
 * should be improved: global arrays -> static local, loop condition, etc...
 */

#include <stdio.h>


char change( char ch )
{
    int i = 0;
    char from[5] = {'a', 'e', 'i', 'o', 'u'};
    char to[5]   = {'e', 'i', 'o', 'u', 'a'};
    while ( i < 5 )
    {
        if ( from[i] == ch )
            return to[i];
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
