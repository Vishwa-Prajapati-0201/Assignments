/*
(A GUESSING GAME): With this program the user has to guess a number that
the program has picked as the lucky number. It uses one for loop and plenty of if
statements. I’ve also thrown in a conditional operator, just to make sure you
haven’t forgotten how to use it!
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(0));

    int random_number = (rand() % 100) + 1; 
    int no_of_guesses = 0;
    int guessed_number;

    do
    {
        printf("Guess the number: ");
        scanf("%d", &guessed_number);
        
        if (guessed_number > random_number)
        {
            printf("Lower number please!\n");
        }
        else if (guessed_number < random_number)
        {
            printf("Higher number please!\n");
        }
        else
        {
            printf("Congrats!!");
        }
        no_of_guesses++;
        
    } while (guessed_number != random_number);
        
    printf("You guessed the number in %d guesses", no_of_guesses);
    return 0;
}