/*
WRITE A PROGRAM IN C FOR THE FOLLOWING.
AN ELECTRIC DISTRIBUTION COMPANY CHARGES ITS DOMESTIC CONSUMERS AS
FOLLOWS.
Consumption in unit       Rate for Charge
0-200                     Rs 0.50 per unit
201-400                   Rs. 100 plus Rs 0.65 per unit excess of 200
401-600                   Rs. 230 plus Rs 0.80 per unit excess of 400
Above 600                 Rs. 425 plus Rs. 125 per unit excess of 600
Print the amount to be paid by the consumer.
*/

#include <stdio.h>
int main()
{
    int consumption;
    float charge;
    printf("Enter consumption in unit: ");
    scanf("%d", &consumption);

    if(consumption <= 200)
    {
        charge = consumption*0.5;
    }
    if(consumption > 200 && consumption <= 400)
    {
        charge = 100 + (consumption - 200)*0.65;
    }
    if(consumption > 400 && consumption <= 600)
    {
        charge = 230 + (consumption - 400)*0.80;
    }
    if(consumption > 600)
    {
        charge = 425 + (consumption - 600)*1.25;
    }
    printf("The consumer have to pay Rs. %.2f", charge);
    return 0;
}