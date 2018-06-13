/* count.c
 *
 * Count the number of characters in input.
 */

/* standard I/O library */
#include <stdio.h>

main() {
    double nc;

    for (nc = 0; getchar() != EOF; ++nc)
        ; /* body required, null statement */

    printf("%.0f\n",nc);
}