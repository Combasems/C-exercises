#include <stdio.h>

/* copy input to output; 2nd version */
int main() {

    int c = EOF;

    while ((c = getchar()) != EOF){
        putchar(c);
        printf("\n %d", (c != EOF));
    }
    printf("\n %d", (getchar() != EOF));

}