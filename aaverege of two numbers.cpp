#include <stdio.h>

int main() {
    int num1, num2;
    float avg;

    // Read two integers
    scanf("%d %d", &num1, &num2);

    // Calculate average
    avg = (num1 + num2) / 2.0;

    // Print the result with 2 decimal places
    printf("Average of %d and %d is: %.2f", num1, num2, avg);

    return 0;
}

