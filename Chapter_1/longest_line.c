#include <stdio.h>
#define MAXLINE 1000 /* max line size saveable */

int my_getline(char line[]);
void copy(char to[], char from[], int length);

/* print longest input line */
int main(){
    int len;  // current line length
    int max;  // max length seen so far
    char line[MAXLINE];  // current input line
    char longest[MAXLINE]; //longest line saved here

    max = 0;
    //this while loop does not terminate for some reason
    // I've tried increased the threshold to >1, >2 since lines may always contain '\n'.kk.lkj
    while ((len = my_getline(line)) > 0) {
        if (len > max) {
            max = len;
            copy(longest, line, len);
        }
    }
    if (max > 0){ // there was a line
        printf("%s", longest);
        printf("Line is %d char long", max);
    }         
    return 0;
}

//getline: read a line into s, return length
int my_getline(char s[]) {
    int c, i;

    for (i=0; (c=getchar()) != EOF && c != '\n'; i++)
        while (i < MAXLINE - 1)
            s[i] = c;
    if (c == '\n') {
        s[i] = c;
        ++i;
    }
    s[i] = '\0';
    return i;
}
// copy: copy 'from' into 'to; assume to is big enough
void copy(char to[], char from[], int length){
    int i = 0;

    if ( length > 1000){
        for(;i< 1000 ; i++)
            to[i] = from[i];
    } else {
        while ((to[i] = from[i]) != '\0')
            ++i;
    }

} 
