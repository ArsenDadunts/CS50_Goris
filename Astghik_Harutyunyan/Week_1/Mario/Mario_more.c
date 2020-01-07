#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int n;
    do
    {
        n = get_int("Height: ");
    }
    while (n < 1 || n > 8);

    for (int i = 0; i < n; i++)
    {
        for (int space = n - 1; space > i; space--)
        {
            printf(" ");
        }
        for (int hash = 0; hash <= i; hash++)
        {
            printf("#");
        }
        printf("  ");
        for (int hash = 0; hash <= i; hash++)
        {
            printf("#");
        }

        printf("\n");
    }
}