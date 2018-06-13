/* countl.c
 * 
 * Count number of lines in given input
 */

/* standard I/O library */
#include <stdio.h>

main() {
    int c, nl;

    nl = 0;

    while ((c = getchar()) != EOF)
        if(c == '\n')
            ++nl;

    printf("%d\n",nl);
}