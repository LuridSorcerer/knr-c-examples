/* copy.c
 *
 * Copy input into output.
 */

/* standard I/O library */
#include <stdio.h>

main() {
    
    /* char isn't big enough to hold EOF? */
    int c;

    c = getchar();

    while (c != EOF) {
        putchar(c);
        c = getchar();
    }
}