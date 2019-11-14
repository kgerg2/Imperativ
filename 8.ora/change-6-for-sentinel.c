/*
 * Cyclic replacement of vowels: a->e, e->i, ..., u->a
 * with for and sentinel element and string-like initialization.
 *
 */

#include <stdio.h>


char change( char ch )
{
    int i;
    static char last = '\0';
    if ( last == ch )
        return ch;
    char from[] = "aeiou"; /* same as {'a','e','i','o','u','\0'}; */
    char to[]   = "eioua";
    for ( i = 0; '\0' != from[i]; ++i )
    {
        if ( from[i] == ch ) {
            last = ch;
            return to[i];
		}
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
