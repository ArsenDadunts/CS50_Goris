#include <math.h>
#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int num, sq;
    do
    {
        num = get_int("Show the prime numbers from 1 to ");
    }
    while (num <= 0);
    
    for (int i = 1; i <= num; i++)
    {
        sq = i * i;
        printf("%d\n", sq);
    }
    return 0;
}
