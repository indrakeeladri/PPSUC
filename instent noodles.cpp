#include <stdio.h>

int main() {
    int X, Y;
    int customers;

    // Read the number of stoves and minutes
    scanf("%d %d", &X, &Y);

    // Calculate total customers that can be served
    customers = X * Y;

    // Print the result
    printf("%d", customers);

    return 0;
}

