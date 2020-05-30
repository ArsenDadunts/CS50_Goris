#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)
{
    int x;
    do
    {
        x = get_int("Type a positive number: ");
    } while (x < 0);

    for (int i = 1; i < x; i++)
    {
        if (i * i <= x)
            printf("%i\n", i * i);
    }
}
