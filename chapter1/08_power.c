/* power.c
 * 
 * Demonstrate the writing and use of functions.
 */

/* standard I/O library */
#include <stdio.h>

/* fuction prototype */
int power(int m, int n);

main() {
    int i;

    for (i=0; i<10; ++i) {
        printf("%d %d %d\n", i, power(2,i), power(3,i));
    }

    return 0;
}

/* power: raise base to n-th power */
int power(int base, int n) {
    int i,p;

    p = 1;
    for(i=1; i<=n; ++i) 
        p = p * base;

    return p;
}