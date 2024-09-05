#include <stdio.h>

// Recursive function to convert Fahrenheit to Celsius
double fahrenheitToCelsius(double fahrenheit, int step) {
    
        return (5.0 / 9.0) * fahrenheitToCelsius(fahrenheit); // Second step: multiply by 5/9
    }


int main() {
    double fahrenheit, celsius;
    
    printf("Enter temperature in Fahrenheit: ");
    scanf("%lf", &fahrenheit);
    
    celsius = fahrenheitToCelsius(fahrenheit); // 2 steps: subtract 32 and then multiply by 5/9
    
    printf("Temperature in Celsius: %.2f\n", celsius);
    
    return 0;
}
