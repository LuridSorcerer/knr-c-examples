/* temp_for.c
 *
 * Convert Fahrenheit to Celsius, but use a for loop.
 */

/* standard I/O library */
#include <stdio.h>

#define LOWER 0    /* lower limit of table */
#define UPPER 300  /* upper limit of table */
#define STEP  20   /* step size */

/* print Fahrenheit to Celsius table */
main() {

    int fahr;

    for (fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP)
        printf("%3d %6.1f\n", fahr, (5.0/9.0)*(fahr-32));
        
}