#include <stdio.h>

// Function to convert Celsius to Fahrenheit
double celsiusToFahrenheit(double celsius) {
    return (celsius * 9 / 5) + 32;
}

int main() {
    double celsius, fahrenheit;
    printf("Enter temperature in Celsius: ");
    scanf("%lf", &celsius);

    fahrenheit = celsiusToFahrenheit(celsius);
    printf("%.3lf Celsius is %.3lf Fahrenheit\n", celsius, fahrenheit);

    return 0;
}
