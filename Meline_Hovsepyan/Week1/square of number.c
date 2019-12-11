#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int result=1;
    int number;

    number = get_int("Please enter the number\n: ");

    while (result * result <= number)
    {
        printf("%i result\n", result * result);
        result++;
    }
}