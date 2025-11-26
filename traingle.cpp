#include <stdio.h>

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    // Check for equilateral
    if (a == b && b == c) {
        printf("Equilateral triangle");
    }
    // Check for isosceles
    else if (a == b || a == c || b == c) {
        printf("Isosceles triangle");
    }
    // Otherwise scalene
    else {
        printf("Scalene triangle");
    }

    return 0;
}

