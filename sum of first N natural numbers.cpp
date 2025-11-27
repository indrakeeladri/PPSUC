#include <stdio.h>

int main() {
    int N, sum = 0;
    
    // Input
    scanf("%d", &N);
    
    // Calculate sum of first N natural numbers
    for (int i = 1; i <= N; i++) {
        sum += i;
    }
    
    // Output
    printf("%d", sum);
    
    return 0;
}

