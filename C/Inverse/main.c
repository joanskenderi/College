// Write a program to find the inverse

#include <stdio.h>

int main() {
    float value, inversedNumber;

    printf("Enter a value: ");
    scanf("%f", &value);

    inversedNumber = 1 / value;
    printf("The inverse is: %f.", inversedNumber);

    return 0;
}
