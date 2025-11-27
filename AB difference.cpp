#include <stdio.h>
#include <stdlib.h>  // for abs() function

int main() {
    int A, B;
    int correct_sum, wrong_output, difference;
    
    // Input
    scanf("%d %d", &A, &B);
    
    // Correct output should be A + B
    correct_sum = A + B;
    
    // Vijay's wrong output is A * B
    wrong_output = A * B;
    
    // Find absolute difference
    difference = abs(correct_sum - wrong_output);
    
    // Output
    printf("%d", difference);
    
    return 0;
}

