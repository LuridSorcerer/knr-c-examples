/* countl.c
 * 
 * Count number of lines in given input
 */

/* standard I/O library */
#include <stdio.h>

main() {
    int c, nl, b, t;

    nl = b = t = 0;

    while ((c = getchar()) != EOF) {
        if(c == '\n') 
            ++nl;
        if(c == ' ')
            ++b;
        if(c == '\t')
            ++t;
    }
    
    printf("%d %d %d\n",nl,b,t);
}