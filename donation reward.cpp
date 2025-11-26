#include <stdio.h>

int main() {
    int X;
    scanf("%d", &X);

    if (X <= 3) {
        printf("BRONZE");
    }
    else if (X <= 6) {   // Already know X > 3 from previous condition
        printf("SILVER");
    }
    else {
        printf("GOLD");
    }

    return 0;
}

