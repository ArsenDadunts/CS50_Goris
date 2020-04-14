#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)
{
    int cent;
    do
    {
        float dollars = get_float("get input number:");
        cent = round(dollars * 100);

    }
    while (cent <= 0);
    int quarters = cent / 25;
    int dimes = (cent % 25) / 10;
    int nickels = ((cent % 25) % 10) / 5;
    int pennies = (((cent % 25) % 10) % 5) / 1;

    printf("%d", quarters + dimes + nickels + pennies);
}
