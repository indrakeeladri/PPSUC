#include <stdio.h>

int main() {
    int num1, num2;
    
    // Input two integers
    scanf("%d %d", &num1, &num2);
    
    // Perform arithmetic operations
    int sum = num1 + num2;
    int diff = num1 - num2;
    int prod = num1 * num2;
    int quot = num1 / num2;
    int rem = num1 % num2;
    
    // Output results
    printf("Sum:%d
", sum);
    printf("Difference:%d
", diff);
    printf("Product:%d
", prod);
    printf("Quotient:%d
", quot);
    printf("Remainder:%d
", rem);
    
    return 0;
}

