//cash
#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)
{
    float dollars = get_float("Change owed: ");
    int cents = round(dollars * 100);
    int count = 0;
    if (cents > 0)
    {
        while (cents >= 25)
        {
            count++;
            cents = cents - 25;
        }
        while (cents >= 10)
        {
            count++;
            cents = cents - 10;
        }
        while (cents >= 5)
        {
            count++;
            cents = cents - 5;
        }
        while (cents >= 1)
        {
            count++;
            cents = cents - 1;
        }
        printf("%i\n", count);
    }
    else 
    {
       main(); 
    }
}
