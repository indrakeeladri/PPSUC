#include <stdio.h>

int main() {
    int x;

    // Read the number
    scanf("%d", &x);

    // Check even or odd
    if (x % 2 == 0) {
        printf("Even");
    } else {
        printf("Odd");
    }

    return 0;
}

