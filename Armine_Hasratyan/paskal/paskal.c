#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int n;
    n = get_int("Number: ");
    for (int i = 0; i < n; i++)
    {
        for (int j = n - 1; j > i; j--)
        {
            printf(" ");
        }
        int p = 1;
        for (int k = 0; k <= i; k++)
        {
            printf(" %d", p);
            p = p * (i - k) / (k + 1);
        }
        printf("\n");
    }
}