// Create a full pyramid pattern using *

#include <stdio.h>

int main() {
    int inputNumber, i, j;

    printf("Enter the height of the pyramid: ");
    scanf("%d", &inputNumber);
    printf("\n");

    for (i = 1; i <= inputNumber; i++) {
        for (j = 1; j <= inputNumber - i; j++) {
            printf(" ");
        }

        for (j = 1; j <= (2 * i) - 1; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
