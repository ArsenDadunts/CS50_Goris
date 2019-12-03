#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int n = get_int("Height: ");
    while ((n < 1) || (n > 8))
    {
        printf("Height: ");
        scanf("%d", &n);
    }
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = i; j < n - 1; j++)
            {
                printf(" ");
            } 
            for (int k = 0; k <= i; k++)
            {
                printf("#");
            }
            printf("\n");
        }
    }
}
