// Create a program that finds how many positive and negative elements are in the array

#include <stdio.h>

int main() {
    int array[100], number, i;
    int positive = 0, negative = 0;

    printf("Enter the amount of elements the array will contain: ");
    scanf("%d", &number);
    printf("Enter %d elements on the array: ", number);

    for (i = 0; i < number; i++) {
        scanf("%d", &array[i]);
        if (array[i] > 0) positive++;
        else negative++;
    }

    printf("There are %d positive elements and %d negative elements in the array.", positive, negative);
    return 0;
}
