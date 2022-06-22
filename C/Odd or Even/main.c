// Write a program that checks if a number is odd or even

#include <stdio.h>

int main() {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    (number % 2 == 0) ? printf("The number is even.") : printf("The number is odd");

    return 0;
}
