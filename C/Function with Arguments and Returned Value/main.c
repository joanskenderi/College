// Create a function which gets parameters and returns a value to find the sum of 2 numbers

#include <stdio.h>

int sum(int a, int b) {
    int s;
    s = a + b;

    return s;
}

int main() {
    int firstNumber, secondNumber, printedSum;

    printf("Enter 2 numbers: ");
    scanf("%d %d", &firstNumber, &secondNumber);

    printedSum = sum(firstNumber, secondNumber);

    printf("The sum is %d.", printedSum);

    return 0;
}
