#include <stdio.h>
#include <cs50.h>

int main(void)
{

    for (int a = 1; a <= 9; a ++)
    {
        for (int b = 1; b <= 9; b++)
        {

            printf("%i * %i = %i\n", a,b, a*b);

        }
        printf("\n");
    }

}