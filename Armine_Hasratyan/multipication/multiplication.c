#include <cs50.h>
#include <stdio.h>

int main()
{
    int n;
    {
        n = get_int("Enter a number: ");
    }

    for (int i = 1; i <= 10; i++)

    {
        printf("%i * %i = %i \n", n, i, i * n);
    }
    return 0;
}