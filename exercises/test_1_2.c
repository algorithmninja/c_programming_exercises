//
// Created by john on 8/6/20.
//

#include <stdio.h>

/* print fahrenheit-Celsius temperature table for fahrenheit = 0, 20, ...  */
int main()
{
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    fahr = lower;
    while (fahr <= upper) {
        celsius = 5 * (fahr - 32) / 9;
        printf("%4.0f\t%6.1f\n", fahr, celsius);
        fahr += step;
    }
}