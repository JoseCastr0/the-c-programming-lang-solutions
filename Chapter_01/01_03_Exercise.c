#include <stdio.h>
// Print Fahrenheit-Celsius table
// for fahr = 0, 20, ..., 300
main()
{
    int fahr, celsius;
    int lower, upper, step;

    lower = 0;      // lower limit of temperature table
    upper = 300;    // upper limit
    step = 20;      // step size

    fahr = lower;
     // Printing a heading above the table
    printf("Fahr\tCelsius\n");
    printf("---------------\n");
    while (fahr <= upper) {
        celsius = (5.0 / 9.0) * (fahr - 32.0);
        printf("%3.0f\t\t%6.1f\n", fahr, celsius);
        fahr = fahr + step;
    }
}