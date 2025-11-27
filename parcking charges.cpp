#include <stdio.h>

int main() {
    int X, Y, H, total;
    
    // Input
    scanf("%d %d %d", &X, &Y, &H);
    
    // Calculate total parking charges
    if (H <= 1)
        total = X;
    else
        total = X + (H - 1) * Y;
    
    // Output
    printf("%d", total);
    
    return 0;
}

