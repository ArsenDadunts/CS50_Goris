#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)
{
    int sum = 0;
    int a = 25;
    int b = 10;
    int c = 5;
    int d = 1;
    float dollars;
    do
    {
        dollars = get_float("Change Owned: ");
    }
    while (dollars < 0);
    int cents = round(dollars * 100);
    while (cents >= a)
    {
        cents = cents - a;
        sum++;
    }
    while (cents >= b)
    {
        cents = cents - b;
        sum++;
    }
    while (cents >= c)
    {
        cents = cents - c;
        sum++;
    }
    while (cents >= d)
    {
        cents = cents - d;
        sum++;
    }
    printf("%i\n", sum);
}