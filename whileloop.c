#include <stdio.h>

int main() {
    int num, sum = 0, remainder;

    // Read a number from the user
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Calculate the sum of digits
    while (num != 0) {
        remainder = num % 10;  // Get the last digit
        sum += remainder;      // Add the digit to the sum
        num /= 10;             // Remove the last digit
    }

    // Print the result
    printf("Sum of digits: %d\n", sum);

    return 0;
}
