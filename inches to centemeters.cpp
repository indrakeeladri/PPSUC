#include <stdio.h>

int main() {
    int height_inch;
    float height_cm;

    // Read height in inches
    scanf("%d", &height_inch);

    // Convert inches to centimeters
    height_cm = height_inch * 2.54;

    // Print height in centimeters with 2 decimal places
    printf("%.2f", height_cm);

    return 0;
}

