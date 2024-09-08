/* Earth takes a period of revolution of 31558150 seconds. 
Write a program to convert this into number of days, hours and minutes */

#include <stdio.h>

int main()
{
    int days, hours, minutes, seconds;
    seconds = 31558150;

    days = seconds/86400;
    hours = (seconds - days*86400) / 3600;
    minutes = (seconds - (days*86400 + hours*3600)) / 60;
    seconds = (seconds - (days*86400 + hours*3600 + minutes*60));

    printf("The total time is %d days %d hours %d minutes %d seconds", days, hours, minutes, seconds);

    return 0;
}