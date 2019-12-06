#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)

{
    float dollar;
    do
    {
        dollar = get_float("Give me the changed owed: ");
    }
    while (dollar <= 0);
    int cents = round(dollar * 100);

    int coin = 0;
    while (cents >= 25)
    {
        cents = cents - 25;
        coin ++;
    }
    while (cents >= 10)
    {
        cents = cents - 10;
        coin ++;
    }
    while (cents >= 5)
    {
        cents = cents - 5;
        coin ++;
    }
    while (cents >= 1)
    {
        cents = cents - 1;
        coin ++;
    }

    printf("%i\n", coin);
}