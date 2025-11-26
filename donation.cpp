#include <stdio.h>

int main() {
    int X, Y;
    scanf("%d %d", &X, &Y);
    
    int donate = Y - X;
    printf("%d", donate);
    
    return 0;
}

