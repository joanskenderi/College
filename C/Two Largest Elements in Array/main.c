// Write a program that prints the 2 largest (different) numbers of the array

#include <stdio.h>

int main() {
    int n, i, max1, max2;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int array[n];

    printf("Enter the elements of the array: ");

    for (i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }

    max1 = -999;
    max2 = -998;

    for (i = 0; i < n; i++) {
        if (array[i] > max1) {
            max2 = max1;
            max1 = array[i];
        } else if (array[i] > max2 && array[i] != max1) {
            max2 = array[i];
        }
    }

    printf("%d and %d are the largest numbers in the array.", max1, max2);

    return 0;
}
