#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int x = get_int("Enter an integer: ");

    for (int i = 0; i <= 10; i++)
    {
        int y = x * i;
        printf("%d * %d = %d \n", x, i, y);
    }
}
