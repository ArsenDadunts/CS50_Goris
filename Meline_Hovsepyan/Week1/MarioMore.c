#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int n;
    do
    {
        n = get_int("Height: ");
    }
    while (n > 8 || n < 1);

    for (int row = 0; row < n; row++)
    {
        for (int space = n - 1; space > row; space--)
        {
            printf(" ");
        }
        for (int h = 0; h <= row; h++)
        {
            printf("#");
        }

        printf("  ");

        for (int h = 0; h <= row; h++)
        {
            printf("#");
        }
        printf("\n");
    }
}
