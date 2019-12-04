#include <cs50.h>

#include <stdio.h>

int main(void)
{
    int f;
    do
    {
        f = get_int("Height  ");
    }
    while (f > 8 || f < 1);
    for (int i = 0; i < f; i++)
    {

        for (int k = 0; k < f - i - 1; k++)
        {
            printf(" ");
        }
        for (int j = f; j > f - i - 1; j--)
        {
            printf("#");
        }
        printf("\n");
    }
}
