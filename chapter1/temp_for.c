/* temp_for.c
 *
 * Convert Fahrenheit to Celsius, but use a for loop.
 */

/* standard I/O library */
#include <stdio.h>

/* print Fahrenheit to Celsius table */
main() {

    int fahr;

    for (fahr = 0; fahr <= 300; fahr = fahr + 20)
        printf("%3d %6.1f\n", fahr, (5.0/9.0)*(fahr-32));
        
}