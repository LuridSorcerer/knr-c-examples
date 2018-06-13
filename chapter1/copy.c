/* copy.c
 *
 * Copy input into output.
 */

/* standard I/O library */
#include <stdio.h>

main() {

    /* char isn't big enough to hold EOF? */
    int c;

    while ( (c = getchar()) != EOF) {
        putchar(c);
    }
}