// Write a program that deletes an element from an array

#include <stdio.h>

int main() {
    int array[50];
    int position, i, number;

    printf("Enter the amount of elements the array will contain: ");
    scanf("%d", &number);

    printf("Enter %d elements in array: \n", number);

    for (i = 0; i < number; i++) {
        printf("array[%d] = ", i);
        scanf(" %d", &array[i]);
    }

    printf("Which element do you want to delete? ");
    scanf("%d", &position);

    if (position >= number + 1) {
        printf("That element can't be deleted.");
    } else {
        for (i = position - 1; i < number - 1; i++) {
            array[i] = array[i + 1];
        }

        printf("The array now is: \n");

        for (i = 0; i < number - 1; i++) {
            printf("array[%d] = ", i);
            printf("%d \n", array[i]);
        }
    }

    return 0;
}  