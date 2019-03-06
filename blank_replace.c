#include <stdio.h>

// copies input to output
// replaces each string of one or more blanks with a single blank
int main(){
    int c;

    while ((c = getchar()) != EOF){
        if (c == ' ')
            putchar(c);
        while (c == ' ') {
            c = getchar();
        } 
        putchar(c);
    }
}