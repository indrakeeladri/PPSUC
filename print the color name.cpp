#include <stdio.h>
#include <ctype.h>  // for toupper()

int main() {
    char code;

    // Input
    scanf("%c", &code);

    // Convert to uppercase to handle both upper and lower cases
    code = toupper(code);

    // Check color code
    switch(code) {
        case 'V':
            printf("Violet");
            break;
        case 'I':
            printf("Indigo");
            break;
        case 'B':
            printf("Blue");
            break;
        case 'G':
            printf("Green");
            break;
        case 'Y':
            printf("Yellow");
            break;
        case 'O':
            printf("Orange");
            break;
        case 'R':
            printf("Red");
            break;
        default:
            printf("-1");
            break;
    }

    return 0;
}

