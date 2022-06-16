// Get 3 numbers as input from the user and print the biggest one out of the 3

#include <stdio.h>

int main() {
    int firstNumber, secondNumber, thirdNumber;

    printf("Vendos tre numra: \n");
    scanf("%d %d %d", &firstNumber, &secondNumber, &thirdNumber);

    if(firstNumber >= secondNumber && firstNumber >= thirdNumber)
        printf("%d eshte numri me i madh \n", firstNumber);

    if(secondNumber >= firstNumber && secondNumber >= thirdNumber)
        printf("%d eshte numri me i madh \n", secondNumber);

    if(thirdNumber >= firstNumber && thirdNumber >= secondNumber)
        printf("%d eshte numri me i madh \n", thirdNumber);

    return 0;
}