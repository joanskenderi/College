// S = 3 - 5 + 7 - 9 + 11 + ...

#include <stdio.h>

int main() {
    int i, n, k, s;
    int sum = 0;

    printf("Enter the value of N: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        if (i % 2 == 0)
            s = -1;
        else
            s = 1;
        k = 2 * i + 1;
        sum = sum + s * k;
    }

    printf("The sum is %d.", sum);

    return 0;
}
