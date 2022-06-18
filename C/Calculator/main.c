// Create a calculator in C

#include <stdio.h>

int main() {
    char operator;
    double firstNumber, secondNumber;

    printf("Which operator will you use: +, -, *, / ? ");
    scanf("%c", &operator);

    printf("Enter 2 numbers: ");
    scanf("%lf %lf", &firstNumber, &secondNumber);

    switch (operator) {
        case '+':
            printf("%.1lf + %.1lf = %.1lf", firstNumber, secondNumber, firstNumber + secondNumber);
            break;

        case '-':
            printf("%.1lf - %.1lf = %.1lf", firstNumber, secondNumber, firstNumber - secondNumber);
            break;;

        case '*':
            printf("%.1lf * %.1lf = %.1lf", firstNumber, secondNumber, firstNumber * secondNumber);
            break;

        case '/':
            printf("%.1lf / %.1lf = %.1lf", firstNumber, secondNumber, firstNumber / secondNumber);
            break;

        default:
            printf("Please enter +, -, * or /.");
    }

    return 0;
}
