#include <stdio.h>

int main() {
    if (1<2<3) {        /* this means (1<2)<3 */
        printf("1<2<3\n");
    }
    
    if (3>2>1) {        /* this means (3>2)>1 */
        printf("3>2>1\n");
    }
    
    return 0;
}
