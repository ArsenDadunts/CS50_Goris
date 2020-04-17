#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
    int count = 0;

   float f;
    do
   {
       f = get_float("Change: ");
    }
    while (f <= 0 );

      int amount = round(f * 100);

    while (amount - 25 >= 0)
    {
        count = count + 1;
        amount = amount - 25;
    }

    while (amount - 10 >= 0)
    {
        count = count + 1;
        amount = amount - 10;
    }

    while (amount - 5 >= 0)
    {
        count = count + 1;
        amount = amount - 5;
    }
    while (amount -1 >= 0)
    {
        count = count + 1;
        amount = amount- 1;
    }

    printf("%i\n", count);
}