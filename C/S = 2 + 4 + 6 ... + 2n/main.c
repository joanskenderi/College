// S = 2 + 4 + 6 ... + 2n

#include <stdio.h>

int main() {
    int i, n, k;
    int sum = 0;

    printf("Enter the value of N: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        k = 2 * i;
        sum = sum + k;
    }

    printf("The sum is %d.", sum);

    return 0;
}
