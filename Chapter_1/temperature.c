#include <stdio.h>

/* print Fahrenheit-Celsius table
    for fahr = 0, 20, ..., 300*/
int temperature_converter(int t);

int main(){
    int fahr, celsius;
    int lower, upper, step;

    lower = 0; /* lower limit of temperature table */
    upper = 300; /* upper limit */
    step = 20; /* step size*/

    fahr = lower;
    while (fahr <= upper) {
        celsius = temperature_converter(fahr);
        printf("%d\t%d\n", fahr, celsius);
        fahr = fahr + step;
    }
}

//fahr to celsius
int temperature_converter(int t){
    return 5 * (t-32)/9;
}