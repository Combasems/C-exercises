#include <stdio.h>

/* counts blanks, tabs, and newlines */
int main(){
    int c, nl, bl, tab;

    nl = bl = tab = 0;
    while ((c = getchar()) != EOF) {
        if (c == '\n'){
            ++nl;
        } else if (c == ' '){
            ++bl;
        } else if(c == '\t'){
            ++tab;
        }
    }
    printf("%d %d %d\n", nl, bl, tab);
}