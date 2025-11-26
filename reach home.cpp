#include <stdio.h>

int main() {
    int X, Y;
    scanf("%d %d", &X, &Y);
    
    int maxDistance = X * 5;  // Pavan can travel 5 km per litre
    
    if (maxDistance >= Y)
        printf("YES");
    else
        printf("NO");
    
    return 0;
}

