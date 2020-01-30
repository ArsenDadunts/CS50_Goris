#include <cs50.h>
#include <stdio.h>


int main(void)
{
    int x = 1;
    int number = get_int("Number:");
    while ((x * x < number))
    {
        printf("%d\n", x * x);
        x++;
    }
}

