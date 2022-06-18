// Create a program that exchanges the amount of seconds taken as input from the user into seconds, minutes and hours

#include <stdio.h>

int main() {
    int seconds, minutes, hours;

    printf("Enter the amount of second: ");
    scanf("%d", &seconds);

    hours = seconds / 3600;
    seconds = seconds % 3600;
    minutes = seconds / 60;
    seconds = seconds % 60;

    printf("There are %d seconds, %d minutes and %d hours in the time you entered.", seconds, minutes, hours);

    return 0;
}
