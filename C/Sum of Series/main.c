// Calculate the sum of this series: 1 + 11 + 111 + 1111... where limit of the series is taken as input from the user

#include <stdio.h>

int main() {
    int inputNumber, i;
    int sum = 0;
    int x = 1;

    printf("Enter a number: ");
    scanf("%d", &inputNumber);
    printf("Sum => ");

    for (i = 1; i <= inputNumber; i++) {
        sum = sum + x;

        if (i == inputNumber) {
            printf("%d = ", x);
        } else {
            printf("%d + ", x);
        }

        x = (x * 10) + 1;
    }

    printf("%d", sum);
    return 0;
}
