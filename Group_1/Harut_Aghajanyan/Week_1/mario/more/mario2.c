#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int a;
    do
    {
        a = get_int("Height: ");
    } while (a < 1 || a > 8);
    int i;
    for (i = 1; i <= a; i++)
    {
        int j;
        for (j = 0; j < i; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}