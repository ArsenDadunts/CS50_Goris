#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int n = get_int("Imput number 1 to 8: ");
    if (n < 1 || n > 8)
    {
        main();
    }
    else
    {
        for (int i = 1; i <= n; i++)
        {
            for (int j = n - i; j > 0; j--)
            {
                printf(" ");
            }
            for (int k = 0; k < i; k++)
            {
                printf("#");
            }
            printf("  ");
            //for second piramid
            for (int m = 0; m < i; m++)
            {
                printf("#");
            }
            printf("\n");
        }
        
        
    }
}
