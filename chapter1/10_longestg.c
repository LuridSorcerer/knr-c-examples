/* longestg.c
 * 
 * Determines which of a given set of strings is the longest.
 * In contrast to longest.c, this version uses global variables instead of passing arguments.
 */

/* standard I/O library */
#include <stdio.h>

#define MAXLINE 1000 /* maximum input line length */

int max; /* longest length seen so far */
char line[MAXLINE]; /* current input line */
char longest[MAXLINE]; /* save longest line here */

int getline(void);
void copy(void);

main() {
    int len;
    extern int max;
    extern char longest[];

    max = 0;
    while((len = getline()) > 0 ) 
        if (len > max) {
            max = len;
            copy();
        }
        

    if (max > 0) /* there was a line */
        printf("%s",longest);

    return 0; 
}

/* getline */
int getline(void) {
    int c,i;
    extern char line[];

    for (i=0; i<MAXLINE-1 && (c=getchar()) != EOF && c != '\n'; ++i)
        line[i] = c;

    if(c=='\n') {
        line[i] = c;
        ++i;
    }

    line[i] = '\0';
    return i;
}

/* copy */
void copy(void) {
    int i;
    extern char line[],longest[];

    i = 0;
    while((longest[i] = line[i]) != '\0')
        ++i;
}