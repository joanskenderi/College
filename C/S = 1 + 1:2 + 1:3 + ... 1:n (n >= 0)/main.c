// S = 1 + 1/2 + 1/3 + ... + 1/n (n >= 0)

#include <stdio.h>

int main() {
    int i, n;
    float a, number, k;
    float sum = 0;

    printf("Enter the value of N: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        a = 1;
        number = i;
        k = a / number;
        sum = sum + k;
    }

    printf("The sum is %.2f.", sum);

    return 0;
}
