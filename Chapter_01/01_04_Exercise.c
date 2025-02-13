#include <stdio.h>
// Print Fahrenheit-Celsius table
// for fahr = 0, 20, ..., 300
main()
{
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;      // lower limit of temperature table
    upper = 300;    // upper limit
    step = 20;      // step size

    celsius = lower;
     // Printing a heading above the table
    printf("Celsius\t\tFahr\n");
    printf("----------------------\n");
    while (celsius <= upper) {
        fahr = celsius * (9.0 / 5.0) + 32.0f;
        printf("%3.0f\t\t%6.1f\n", celsius, fahr);
        celsius = celsius + step;
    }
}