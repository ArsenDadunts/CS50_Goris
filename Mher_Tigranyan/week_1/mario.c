//mario
#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int n = get_int("imput number:");  //import number 1 to 8
    if (n < 1 || n > 8)
    {
        main();
    } 
    else 
    {
        for (int i = 0; i < n; i++)
        {
            for (int k = i; k < n - 1; k++)
            {
                printf(" ");
            }
            for (int j = 0; j <= i; j++)
            {
                printf("#");
            }
            printf("\n");
        }
    }
}
