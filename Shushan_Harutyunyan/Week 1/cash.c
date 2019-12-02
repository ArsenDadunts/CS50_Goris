#include <math.h>
#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int cents_owed;
    // prompt to input change owed unless getting valid input
    do
    {
        float dollars_owed = get_float("Change owed = ");
        cents_owed = round(dollars_owed * 100);
    }
    while (cents_owed <= 0);
    
    // convert owed change to quarters, dimes, nickels, pennies
    int quarters = cents_owed / 25;
    int dimes = (cents_owed % 25) / 10;
    int nickels = ((cents_owed % 25) % 10) / 5;
    int pennies = ((cents_owed % 25) % 10) % 5;

    printf("%i\n", quarters + dimes + nickels + pennies);
}
