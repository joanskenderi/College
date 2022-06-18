// Get a number as an input from the user and print it reversed

#include <stdio.h>

int main() {
    int userInput, reversedValue = 0, a;

    printf("Enter a value: ");
    scanf("%d", &userInput);

    while (userInput != 0) {
        a = userInput % 10;
        reversedValue = reversedValue * 10 + a;
        userInput /= 10;
    }

    printf("The reversed value is %d.", reversedValue);

    return 0;
}
