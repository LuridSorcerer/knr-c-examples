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
    // For signed numbers, the method I'm using is to set bit 0 then shift it
    // into the left-most bit. This gives the largest possible negative number.
    // Subtract one from that and it will roll over and give the hightest possible
    // positive number. 
    // For unsigned, I set the variable to zero and subtract 1, causing it to
    // roll over to the highest possible value. 

    // char
    char sc = 1;
    sc <<= 7;
    printf("Char Min:%d ", sc);
    sc--;
    printf("Max:%d\n", sc);

    // uchar
    unsigned char uc = 0;
    uc--;
    printf("UChar Min:%d Max:%d\n", 0, uc);

    // short
    short ss = 1;
    ss <<= 15;
    printf("Short Min:%d ", ss);
    ss--;
    printf("Max:%d\n",ss);

    // ushort
    unsigned short us = 0;
    us--;
    printf("UShort Min:%u Max:%u\n", 0, us);

    // int
    int si = 1;
    si <<= 31;
    printf("Int Min:%d",si);
    si--;
    printf(" Max:%d\n",si);

    // uint
    unsigned int ui = 0;
    ui--;
    printf("UInt Min:%u Max:%u\n", 0, ui);

    // long
    long sl = 1;
    sl <<= 63;
    printf("Long Min:%ld",sl);
    sl--;
    printf(" Max:%ld\n",sl);

    // ulong
    unsigned long ul = 0;
    ul--;
    printf("ULong Min:%lu Max:%lu\n", 0L, ul);

    // I'll worry about the floating point types another day...

}