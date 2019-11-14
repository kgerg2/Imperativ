/*
 * Cyclic replacement of vowels: a->e, e->i, ..., u->a
 * with for and sentinel element and string-like initialization.
 *
 */

#include <stdio.h>


char change( char ch, int argc, char *argv[] )
{
    int i;
    static char last = '\0';
    if ( last == ch )
        return ch;
    for ( i = 1; i<argc; ++i )
    {
        if ( argv[i][0] == ch ) {
            last = ch;
            return argv[i][1];
		}
    }
    return ch;
}

int main( int argc, char *argv[] )
{
    int ch;

    while ( (ch = getchar()) != '0' )
    {
        putchar( change(ch, argc, argv) );
    }
    return 0;
}
