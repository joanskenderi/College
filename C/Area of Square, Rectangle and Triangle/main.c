// Write a program that finds the area of a square, a rectangle and a triangle

#include <stdio.h>

int main() {
    int firstSide, secondSide, squareArea, rectangleArea, triangleArea;

    printf("Enter the value of the first side: ");
    scanf("%d", &firstSide);
    printf("Enter the value of the second side: ");
    scanf("%d", &secondSide);

    squareArea = firstSide * firstSide;
    rectangleArea = firstSide * secondSide;
    triangleArea = (firstSide * secondSide) / (2 * 1);

    printf("The area of the square is %d square cm, the area of the rectangle is %d square cm and the area of the triangle is %d square cm.",
           squareArea, rectangleArea, triangleArea);

    return 0;
}
