#include <stdio.h>
#include <cs50.h>
#include <unistd.h>

int main(void)
{
    int a;
    do
    {
        a = get_int("Height: ");
    } while (a < 1 || a > 8);

    int i;
    for (i = 0; i < a; i++)
    {
        int j;
        for (int j = 0; j < a; j++)
        {
            if (i + j < a - 1)
                printf(" ");
            else
                printf("#");
        }
        printf("\n");
    }
}
