/*
IMPLEMENT A FUNCTION NAMED AS FLIP; WHICH WILL TAKE A NUMBER AS INPUT AND FLIP ITS LAST N DIGITS
FOR EXAMPLE FLIP(123, 2)= 132 ; (HERE N=2) FLIP(12345,3)= 12543 (HERE N=3).
*/

#include <stdio.h>
#include <math.h>

void store_digit(int *No, int num);

int main()
{
    int N, F;
    printf("Enter the number: ");
    scanf("%d", &N);

    printf("\nEnter how many digits to flip from last: ");
    scanf("%d", &F);

    store_digit(&N, F);

    return 0;
}

void store_digit(int *No, int num)
{
    int temp;
    //*No = 12345;
    int B[100];
    int co = 0;

    for (int i = 0; i < 100; i++)
    {
        B[i] = (*No / pow(10, i));
        B[i] = B[i] % 10;

        if (B[i] == 0)
        {
            break;
        }
        co++;
    }

    for (int i = 0; i < num / 2; i++)
    {
        temp = B[num - 1 + i];
        B[num - 1 + i] = B[i];
        B[i] = temp;
    }

    for (int i = co - 1; i >= 0; i--)
    {
        printf("%d", B[i]);
    }
}

// void Flip(int *F, int num)
//{
//
//     //store_digit();
//
//
// }