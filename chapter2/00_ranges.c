/* Exercise 2-1
    Write a program to determine the ranges of char, short, int, and long
    variables, both signed and unsigned, by printing appropriate values from
    standard headers and by direct computation. Harder if you compute them:
    determine the ranges of the various floating point types. 
*/

#include <stdio.h>
#include <limits.h>

int main() {

    //
    // Print from headers
    //

    // char
    printf("Char: Min=%d Max=%d \n", SCHAR_MIN, SCHAR_MAX);

    // uchar
    printf("UChar: Min=%d Max=%d \n", 0, UCHAR_MAX);

    // short
    printf("Short: Min=%d Max=%d \n", SHRT_MIN, SHRT_MAX); 

    // ushort
    printf("UShort: Min=%d Max=%d \n", 0, USHRT_MAX); 

    // int
    printf("Int: Min=%d Max=%d \n", INT_MIN, INT_MAX);

    // uint
    printf("Uint: Min=%u Max=%u \n", 0, UINT_MAX);

    // long
    printf("Long: Min:%ld Max:%ld \n", LONG_MIN, LONG_MAX);

    // ulong
    printf("ULong: Min:%lu Max:%lu \n\n", 0L, ULONG_MAX);

    //
    // Calculate
    //

    // char
    char sc = 0;
    while ( (char)(sc-1) < 0 ) { sc--; }
    printf("Char Min:%d ", sc);
    sc = 0;
    while ( (char)(sc+1) > 0 ) { sc++; }
    printf("Max:%d\n", sc);

    // uchar
    unsigned char uc = 0;
    do { uc++; } while( (unsigned char)(uc+1) > 0 );
    printf("UChar Min:%d Max:%d\n", 0, uc);

    // short
    short ss = 0;
    while ( (short)(ss-1) < 0) { ss--; }
    printf("Short Min:%d ", ss);
    ss = 0;
    while( (short)(ss+1) > 0) { ss++; }
    printf("Max:%d\n",ss);

    // ushort
    unsigned short us = 0;
    while ( (unsigned short)(us+1) > 0) { us++; }
    printf("UShort Min:%u Max:%u\n", 0, us);

    // int

    // uint
    unsigned int ui = 0;
    while ( (unsigned int)(ui+1) > 0) {ui++;}
    printf("UInt Min:%u Max:%u\n", 0, ui);

    // long

    // ulong

}