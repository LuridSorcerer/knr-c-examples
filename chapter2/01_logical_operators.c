/* Exercise 2-2
    for (i=0; i<lim-1 && (c=getchar()) != '\n' && c != EOF; ++i)
        s[i] = c;

    Write a loop equivalent to the for loop above without using && or ||. 
*/

#include <stdio.h>

int main() {
    int lim = 100;
    char c;
    char s[lim];
    int i;

/* Replace this 
    
    for (i=0; i<lim-1 && (c=getchar()) != '\n' && c != EOF; ++i) {
        s[i] = c;
    }

*/



    printf("s: %s", s);
}