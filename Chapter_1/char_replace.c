#include <stdio.h>

// copies input to output
// replaces each string of one or more blanks with a single blank
int main()
{
    int c;

    while ((c = getchar()) != EOF)
    {
        switch(c) {
            case '\t':
                printf("\\t");
                break;
            case '\b':
                printf("\\b");
                break;
            case '\\':
                printf("\\\\");
                break;
        }
    }
}