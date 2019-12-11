#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main()
{
    int cents;

    do
    {
        float dollars_owed = get_float("Change: ");
        cents = round(dollars_owed * 100);
    }
    while (cents <= 0);

    int quarters = cents / 25;
    int dimes = (cents % 25) / 10;
    int nickels = ((cents % 25) % 10) / 5;
    int pennies = ((cents % 25) % 10) % 5;

    printf("%d\n", quarters + dimes + nickels + pennies);
}
