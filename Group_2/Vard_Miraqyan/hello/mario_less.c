#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int a = 0;
    do
    {
        a = get_int("Height: ");
    }
    while (a < 1 || a > 8);


    for (int r = 1; r <= a; r++)
    {
        for (int s = 1; s <= a - r; s++)
        {
            printf(" ");
        }
        for (int v = 1; v <= r; v++)
        {
            printf("#");
        }
        printf("\n");
    }
}
