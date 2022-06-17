// Create a palindrome program in C

#include <stdio.h>

void Palindrome(int n) {
    char ch;
    if (n == 1) {
        scanf("%c", &ch);
    } else {
        scanf("%c", &ch);
        Palindrome(n - 1);
        printf("%c", ch);
    }
}

int main() {
    int n = 3;
    Palindrome(n);

    return 0;
}

