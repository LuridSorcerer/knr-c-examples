/* Exercise 2-1
    Write a program to determine the ranges of char, short, int, and long
    variables, both signed and unsigned, by printing appropriate values from
    standard headers and by direct computation. Harder if you compute them:
    determine the ranges of the various floating point types. 
*/

#include <stdio.h>
#include <limits.h>

int main() {

    // Print from headers

    // char
    printf("Char: Min=%d Max=%d \n", SCHAR_MIN, SCHAR_MAX);
    printf("UChar: Min=%d Max=%d \n", 0, UCHAR_MAX);

    // short
    printf("Short: Min=%d Max=%d \n", SHRT_MIN, SHRT_MAX); 
    printf("UShort: Min=%d Max=%d \n", 0, USHRT_MAX); 

    // int
    printf("Int: Min=%d Max=%d \n", INT_MIN, INT_MAX);
    printf("Uint: Min=%u Max=%u \n", 0, UINT_MAX);

    // long
    printf("Long: Min:%ld Max:%ld \n", LONG_MIN, LONG_MAX);
    printf("ULong: Min:%lu Max:%lu \n\n", 0L, ULONG_MAX);

    // Calculate

}