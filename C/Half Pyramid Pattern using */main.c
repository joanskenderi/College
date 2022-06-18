// Create a half pyramid pattern using *

#include <stdio.h>

int main() {
    int inputNumber, i, j;

    printf("Enter the base of the pyramid: ");
    scanf("%d", &inputNumber);
    printf("\n");

    for (i = 1; i <= inputNumber; i++) {
        for (j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
