#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int p = 1;
    int n;
    n = get_int("Number: ");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j > n - 1; j--)
        {
            printf(" ");
        }
        for (int j = 0; j <= i; j++)
        {
            printf("%i", p);
            p++;
        }
        printf("\n");
    }
}
