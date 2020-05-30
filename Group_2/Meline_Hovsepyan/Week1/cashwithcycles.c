#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main()
{
    int cents;
    int a = 0;

    do
    {
        float dollars_owed = get_float("Change: ");
        cents = round(dollars_owed * 100);
    }
    while (cents <= 0);
    while (cents >= 25)
    {
        cents = cents - 25;
        a++;
    }
        while (cents >= 10)
    {
        cents = cents - 10;
        a++;
    }
    while (cents >= 5)
    {
        cents = cents - 5;
        a++;
    }
        while (cents >= 1)
    {
        cents = cents - 1;
        a++;
    }
   printf ("%d\n", a);

    }
