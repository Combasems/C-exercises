#include <stdio.h>

#define FIRST_GRAPH_CHAR 32
#define LAST_GRAPH_CHAR 126
#define NUM_GRAPH_CHAR (LAST_GRAPH_CHAR - FIRST_GRAPH_CHAR + 1)

//prints a histogram of frequencies of char in input
int main(void){

    int c; //input
    int charArray[NUM_GRAPH_CHAR] = { 0 };


    //grabs char and increments entry in array
    while((c = getchar()) != EOF){
        if (c >= FIRST_GRAPH_CHAR && c <= LAST_GRAPH_CHAR) {
            ++charArray[c - 30];
        }
        
    }

    printf("Char Frequency Histogram by char number\n");
    for (int i = 0; i < NUM_GRAPH_CHAR; i++){
        printf("%d:", i + FIRST_GRAPH_CHAR);
        for (int j = 1; j <= charArray[i]; j++)
            putchar('=');
        putchar('\n');
    }
    return 0;
}