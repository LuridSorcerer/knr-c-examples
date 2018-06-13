/* count.c
 *
 * Count the number of characters in input.
 */

/* standard I/O library */
#include <stdio.h>

main() {
    long nc;

    nc = 0;

    while (getchar() != EOF) 
        ++nc;

    printf("%ld\n",nc);
}