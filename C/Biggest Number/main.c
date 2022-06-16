// Get 3 numbers as input from the user and print the biggest one out of the 3

#include <stdio.h>

int main() {
    int firstNumber, secondNumber, thirdNumber;

    printf("Enter 3 numbers: ");
    scanf("%d %d %d", &firstNumber, &secondNumber, &thirdNumber);

    if (firstNumber >= secondNumber && firstNumber >= thirdNumber)
        printf("%d is the biggest number.", firstNumber);

    if (secondNumber >= firstNumber && secondNumber >= thirdNumber)
        printf("%d is the biggest number.", secondNumber);

    if (thirdNumber >= firstNumber && thirdNumber >= secondNumber)
        printf("%d is the biggest number.", thirdNumber);

    return 0;
}
