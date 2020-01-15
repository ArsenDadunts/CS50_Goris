#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int x = 1;
    int y = 1;
    int z = 0;
    int count = 0;
    for (int i = 0; i < 100; i++)
    {
        for (int j = 0; j < 100; j++)
        {
            z = x % y;
            if (z == 0)
            {
                count++; 
            }
            y++;
        }
        if (count <= 2)
        {
            printf("%d\n", x);
        }
        x++;
        y = 1;
        count = 0;
    }
}
