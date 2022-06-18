// Write a program which merges 2 arrays taken as input from the user

#include<stdio.h>

int main() {
    int firstArray[50], secondArray[50], firstSize, secondSize, i, k, mergedArrays[100];

    printf("Enter the number of elements in the first array: ");
    scanf("%d", &firstSize);
    printf("Enter the elements of the first array: ");

    for (i = 0; i < firstSize; i++) {
        scanf("%d", &firstArray[i]);
        mergedArrays[i] = firstArray[i];
    }

    k = i;

    printf("Enter the number of elements in the second array: ");
    scanf("%d", &secondSize);

    printf("Enter the elements of the second array: ");

    for (i = 0; i < secondSize; i++) {
        scanf("%d", &secondArray[i]);
        mergedArrays[k] = secondArray[i];
        k++;
    }

    printf("The merged arrays are: ");

    for (i = 0; i < k; i++)
        printf("%d ", mergedArrays[i]);

    return 0;
}