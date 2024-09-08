// program to read total seconds and convert it into time

#include <stdio.h>

int main()
{
    int seconds, hours, minutes;
    printf("Enter total seconds: ");
    scanf("%d", &seconds);

    hours = seconds/3600;
    minutes = (seconds - hours*3600)/60;
    seconds = (seconds - (hours*3600 + minutes*60));

    printf("Time is %d hours %d minutes %d seconds", hours, minutes, seconds);

    return 0;
}