#include <stdio.h>

int main(void)
{
    for (int i = 2; i < 100; i++)
    {
        for (int j = 2; j <= i; j++)
        {
            if (i == j)
                printf("%d\n", i);
            else if (i % j == 0)
                break;
        }
    }
}