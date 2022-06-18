// Write a program that tells the student what grade he got

#include <stdio.h>

int main() {
    int score;

    printf("Enter the score: ");
    scanf("%d", &score);

    if (score < 0 || score > 100) {
        printf("The score should be in a range from 0 to 100.");
    } else {
        if (score >= 90)
            printf("A");
        else if (score >= 80)
            printf("B");
        else if (score >= 70)
            printf("C");
        else if (score >= 60)
            printf("D");
        else if (score >= 50)
            printf("E");
        else
            printf("F");
    }

    return 0;
}
