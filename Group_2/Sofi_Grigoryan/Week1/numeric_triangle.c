#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int x = 1;
    int number = 5;
    for (int i = 1; i <= number; i++)
    {
        for (int j = i; j < number; j++)
        {
            printf(" ");
        }
        for (int k = 0; k < i; k++)
        {
            printf("%d", x);
            x++;
        }
        for (int m = 1; m < i; m++)
        {
            printf("%d", x - 2);
            x--;
        }
        printf("\n");
    }
}
