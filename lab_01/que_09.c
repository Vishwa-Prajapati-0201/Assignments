// program to read time in hour, minutes, seconds and convert it into total seconds

#include <stdio.h> 

int main()
{
    int hour, minutes, seconds, total_seconds;
    printf("Enter hour: ");
    scanf("%d", &hour);
    printf("Enter minutes: ");
    scanf("%d", &minutes);
    printf("Enter seconds: ");
    scanf("%d", &seconds);

    total_seconds = hour*3600 + minutes*60 + seconds;
    printf("Total seconds are %d", total_seconds);

    return 0;
}