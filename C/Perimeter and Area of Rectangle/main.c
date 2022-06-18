// Write a program that finds the perimeter and the area of a rectangle

#include <stdio.h>

int main() {
    int width, height, area, perimeter;

    printf("Enter the height and width of the triangle: ");
    scanf("%d %d", &height, &width);


    perimeter = 2 * (height + width);
    printf("Perimeter of the rectangle is %d cm. \n", perimeter);

    area = height * width;
    printf("Area of the rectangle is %d square cm. \n", area);

    return 0;
}
