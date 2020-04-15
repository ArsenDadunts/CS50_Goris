#include <stdio.h>
#include <stdbool.h>
#include <cs50.h>

int main(void)
{
    int end = 0, i, j;
    bool isPrime;  

    do
    {
        end = get_int ("Show the prime numbers between 1 to ");
    }
    while (end <= 1);

    printf("Prime numbers between 1 to %i are: ", end);

    for(i = 2; i <= end; i++)
    {
        isPrime = true; 

        for(j = 2; j <= i/2; j++)
        {
            if(i % j == 0)
            {
                isPrime = false;
                break;
            }
        }

        if (isPrime == true)
        {
            printf("%i, ", i);
        }
    }
    printf("\n");
}
