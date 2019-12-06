#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int rows, space, coef = 1, i, j;
    do
    {
        rows = get_int("Enter the number of rows: ");
    }
    while (rows <= 0);
    
    for (i = 0; i < rows; i++)
    {
        for (space = 1; space < rows - i; space++)
        {
            printf("  ");
        }
        for (j = 0; j <= i; j++) 
        {
            if (j == 0 || i == 0)
                coef = 1;
            else
                coef = coef * (i - j + 1) / j;
            printf("%4d", coef);
        }
        printf("\n");
    }    
}
