
/*
 * Cyclic replacement of vowels: a->e, e->i, ..., u->a
 * with optimizing speed.
 *
 */

#include <stdio.h>


void init(char table[256])
{
    int i;
    for (i = 0; i < 256; ++i) 
    {
        table[i] = i;
    }
    table['a'] = 'e';
    table['e'] = 'i';
    table['i'] = 'o';
    table['o'] = 'u';
    table['u'] = 'a';
}

char change( unsigned char ch, char table[256] )
{
    return table[ch];
}

int main()
{
    int ch;
    char table[256];
    init(table);
    while ( (ch = getchar()) != '0' )
    {
        putchar( change(ch, table) );
    }
    return 0;
}
