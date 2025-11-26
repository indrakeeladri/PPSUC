#include <stdio.h>

int main() {
    int A, B, X, Y;
    scanf("%d %d %d %d", &A, &B, &X, &Y);

    int messi_points = A * 2 + B * 1;
    int ronaldo_points = X * 2 + Y * 1;

    if (messi_points > ronaldo_points) {
        printf("Messi");
    }
    else if (ronaldo_points > messi_points) {
        printf("Ronaldo");
    }
    else {
        printf("Equal");
    }

    return 0;
}

