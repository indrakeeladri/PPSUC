#include <stdio.h>

int main() {
    int X, Y, Z;
    int total_money, chocolates;
    
    // Input number of 5 rupee coins, 10 rupee coins, and cost per chocolate
    scanf("%d", &X);
    scanf("%d", &Y);
    scanf("%d", &Z);
    
    // Calculate total money Romeo has
    total_money = (X * 5) + (Y * 10);
    
    // Calculate maximum chocolates Romeo can buy
    chocolates = total_money / Z;
    
    // Output result
    printf("%d", chocolates);
    
    return 0;
}

