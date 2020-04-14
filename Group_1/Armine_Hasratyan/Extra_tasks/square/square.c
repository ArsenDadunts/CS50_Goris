#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main()
{
    int n;
    {
        n = get_int("Enter a number: ");
    }

    for (int i = 1; i * i <= n; i++)

    {
        printf("%d\n", i * i);
    }
    return 0;
}