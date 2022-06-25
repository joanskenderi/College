// S = 1 + 2 + 3 + ... + n (n > 0)

#include <stdio.h>

int main() {
    int i, n, k;
    int sum = 0;

    printf("Enter the value of N: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        k = i;
        sum = sum + k;
    }

    printf("The sum is %d.", sum);

    return 0;
}
