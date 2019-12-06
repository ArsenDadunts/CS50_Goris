#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int x = 1;
    int y = 1;
    int z = 0;
    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            z = y * x;
            printf("%i * %i = %d\n", x, y, z);
            x = x + 1;
        }
        y = y + 1;
        x = 1;
    }
}    

