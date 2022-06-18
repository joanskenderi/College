// Create a program that exchanges the amount of days taken as input from the user into days, weeks and years

#include <stdio.h>

int main() {
    int days, weeks, years;

    printf("Enter the amount of days: ");
    scanf("%d", &days);

    years = days / 365;
    weeks = (days % 365) / 7;
    days = (years * 365) + (weeks * 7);

    printf("%d days\n", days);
    printf("%d weeks\n", weeks);
    printf("%d years\n", years);

    return 0;
}
