// Write a program that check if an element exists in the array

#include <stdio.h>

int main() {
    int number, i, search, array[50];

    printf("Enter the amount of elements the array will contain: ");
    scanf("%d", &number);

    printf("Enter the elements of the array: ");
    for (i = 0; i < number; i++) {
        scanf("%d", &array[i]);
    }

    printf("Enter the element you're searching for: ");
    scanf("%d", &search);

    i = 0;

    while (i < number && search != array[i]) {
        i++;
    }

    if (i < number) {
        printf("The element is in %d.", i + 1);
    } else {
        printf("The element cannot be found on the array.");
    }

    return 0;
}