// Create a function which doesn't get arguments and doesn't return a value to find the sum of 2 numbers

#include <stdio.h>

int sum() {
    int s;
    int a = 5;
    int b = 6;

    s = a + b;
}

int main() {
    int printedSum;

    printedSum = sum();

    printf("The sum is %d.", printedSum);

    return 0;
}
