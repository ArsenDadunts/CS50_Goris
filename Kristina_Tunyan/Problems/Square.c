#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int number = get_int("Enter a number: ");
    for (int i = 0; i < number; i++)
    {
        int square = i*i;
        printf("%d \n", square);
    }
}