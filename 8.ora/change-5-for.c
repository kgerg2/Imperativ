
/*
 * Cyclic replacement of vowels: a->e, e->i, ..., u->a
 * with for statement and sizeof trick.
 *
 */

#include <stdio.h>


char change( char ch )
{
    int i;
    char from[] = {'a', 'e', 'i', 'o', 'u'};
    char to[]   = {'e', 'i', 'o', 'u', 'a'};
    for ( i = 0; i < sizeof(from)/sizeof(from[0]); ++i )
    {
        if ( from[i] == ch )
            return to[i];
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
