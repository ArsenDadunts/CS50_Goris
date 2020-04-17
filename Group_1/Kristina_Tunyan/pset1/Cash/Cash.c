#include <stdio.h>
#include <cs50.h>
#include <math.h>


#define QUARTER 25;
#define DIME 10;
#define NICKEL 5;

int main(void)
{
    float amountGiven;
    int centsAmount, leftoverAmount, quarterCount, dimeCount, nickelCount, coinsCount;
    do
    {
        amountGiven = get_float(" Change owed:");
        if (amountGiven < 0)
        printf("You need to enter a number greater than 0. eg. 1.50, 0.65, 2.12\n");
    }
    while (amountGiven < 0);
    centsAmount = (int)round(amountGiven * 100);
    quarterCount = centsAmount / QUARTER;
    leftoverAmount = centsAmount % QUARTER;
    dimeCount = leftoverAmount / DIME;
    leftoverAmount = leftoverAmount % DIME;
    nickelCount = leftoverAmount / NICKEL;
    leftoverAmount = leftoverAmount % NICKEL;
    coinsCount = quarterCount + dimeCount + nickelCount + leftoverAmount;
    printf(" %i coins.\n", coinsCount);
}