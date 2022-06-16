// Get 1 number as an input from the user and check if it is a prime number or not

#include <stdio.h>
#include <stdbool.h>

int main() {
    int inputNumber, i;
    bool testBool = true;

    printf("Enter a number: ");
    scanf("%d", &inputNumber);

    for (i = 2; i <= inputNumber / 2; i++) {
        if (inputNumber % i == 0) {
            testBool = false;
            break;
        }
    }

    if (testBool == true) {
        printf("%d is a prime number.", inputNumber);
    } else {
        printf("%d is not a prime number.", inputNumber);
    }

    return 0;
}
