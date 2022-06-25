// S = 1/3 + 3/5 + 5/7 ... 2n - 1/2n + 1

#include <stdio.h>

int main() {
    int i, n;
    float k;
    float a = 3;
    float sum = 0, number = 1;

    printf("Enter the value of N: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        k = number / a;
        sum = sum + k;
        number = 2 * i - 1;
        a = 2 * i + 1;
    }

    printf("The sum is %.2f.", sum);

    return 0;
}
