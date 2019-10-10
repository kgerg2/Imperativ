#include<stdio.h>

int main() {
    
    /*
     * Ellenőrizd az alábbiakat a lenti 4 kódsoron
     *  - 'h = s;' sorban megtörténik az upcast (tipp: sizeof)
     *  - 's = h;' sorban megtörténik a downcast (tipp: -Wconversion)
     */
    
    int h;
    short s = 123;
    h = s;
    s = h;

    /*
    * Végezd el az alábbi műveletet:
    *   3 * -500 + 650000 (ahol a típusok: char, short, int)
    * majd a végeredményt tárold egy short típusú változóban.    
    */
    
    char a = 3;
    short b = -500;
    int c = 650000;
    short x = a*b+c;
    printf("%d %d %d\n", a*b, b, c);
    printf("%d\n", x);
    
    /*
     * Módosítsd úgy az előző megoldásod, hogy a műveletek
     *  a, char értékekkel történjenek
     *  b, short értékekkel történjenek
     *
     * Értsd meg, hogy miért különböznek a kapott eredmények!
     */
     
    
    /*
     * Az alábbi programrészletben cseréld le a TODO részeket
     * olyan módon, hogy a képernyőn a "116.0000"
     * jelenjen meg!     
     */
    
    int  i = 17;
    char k = 'c';
    
    printf("%3.4f\n", (float)i+k);

    /*
     * Operátorok és függvények alkalmazása nélkül érd el, hogy
     * az 'f' változó értéke csökkenjen az eredeti értékhez képest.
     * Ha tudsz, adj több megoldást is!
     */

    int f = 200;
    printf("%lu ", (signed long int)(unsigned long long int)(char)f);
    
    /*
     * Olvass be a billentyűzetről egy lebegőpontos számot, majd
     * 'tüntesd el' a tört részét. A végeredméy típusa float legyen.
     * Ne használj operátorokat, függvényeket!
     * Ha tudsz, adj több megoldást is!
     */

    return 0;
}
