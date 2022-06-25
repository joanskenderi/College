// Write a program that checks whether a triangle is valid or not when its sides are given as input from the user

#include <stdio.h>

int main() {
    int firstSide, secondSide, thirdSide;

    printf("Enter the length of the sides of triangle: ");
    scanf("%d %d %d", &firstSide, &secondSide, &thirdSide);

    if (firstSide + secondSide > thirdSide && firstSide + thirdSide > secondSide && secondSide + thirdSide > firstSide)
        printf("The triangle is valid.");
    else
        printf("The triangle is invalid.");

    return 0;
}
