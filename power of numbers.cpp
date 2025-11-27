#include <stdio.h>
#include <math.h>

int main() {
    int x, y, M;
    long long result;
    
    // Input
    scanf("%d %d %d", &x, &y, &M);
    
    // Calculate (x^y) % M
    result = (long long)pow(x, y) % M;
    
    // Output
    printf("%lld", result);
    
    return 0;
}

