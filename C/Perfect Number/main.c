// Get 1 number as an input from the user and check if it is a perfect number or not

#include <stdio.h>

int main() {
    int inputNumber, i;
    int sum = 0;

    printf("Enter a number: ");
    scanf("%d", &inputNumber);

    for (i = 1; i <= inputNumber / 2; i++) {
        if (inputNumber % i == 0) {
            sum = sum + i;
        }
    }

    if (sum == inputNumber) {
        printf("%d is a perfect number.", inputNumber);
    } else {
        printf("%d is not a perfect number.", inputNumber);
    }

    return 0;
}
