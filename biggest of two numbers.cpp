#include <stdio.h>

int main() {
    int x, y;

    // Input two numbers
    scanf("%d", &x);
    scanf("%d", &y);

    // Find biggest
    if (x > y) {
        printf("%d", x);
    } else {
        printf("%d", y);
    }

    return 0;
}

