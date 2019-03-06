#include <stdio.h>

/* copies input to output where each word is on a new line */
int main(){
    int c;

    while ((c = getchar()) != EOF)
    {
        if (c == ' ' || c == '\n' || c == '\t'){
            putchar('\n');
        }
        while (c == ' ' || c == '\n' || c == '\t'){
            c = getchar();
        }
        putchar(c);
    }

}