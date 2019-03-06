#include <stdio.h>

#define IN 1 //Inside a word
#define OUT 0 //Outside a word

//Prints out histogram of word lengths of given input
//Any word >10 char is counted as length 10
int main(){
    int c, state, wordLength;
    int wordLengthArray[10];

    for(int i = 0; i < 10 ; i++){
        wordLengthArray[i] = 0;
    }

    state = OUT;
    wordLength = 0;

    while ( (c = getchar()) != EOF){
        if(c == ' ' || c == '\n' || c == '\t') {
            if (state == IN) 
                //adds word length to array since a word has been completed
                ++wordLengthArray[wordLength - 1];
            wordLength = 0;
            state = OUT;
        }
        else {
            if(wordLength < 10){
                ++wordLength;
            }
            state = IN;
        }
    }

    printf("Word length histogram 1 to 10\n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d:", i + 1);
        if(wordLengthArray[i] >= 1)
            for(int j = 1; j <= wordLengthArray[i]; j++)
                putchar('=');
        putchar('\n');
    }
    printf("\n");
}