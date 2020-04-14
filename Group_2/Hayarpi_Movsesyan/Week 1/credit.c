#include <math.h>
#include <cs50.h>
#include <stdio.h>

int main(void)
{
    long number = get_long("Number: ");
    long credit = number;
    int sum = 0;
    int index = 0;
    int temp;
    while (number > 0)
    {
        temp = number % 10;
        number /= 10;
        if (index % 2 == 1)
        {
            if (temp * 2 >= 10)
            {
                sum += 1 + ((temp * 2) % 10);
            }
            else
            {
                sum += temp * 2;
            }
        }
        else
        {
            sum += temp;
        }
        index++;
        printf("index - %i sum - %i\n", index, sum);
    }
    if (sum % 10 == 0)
    {
        if (index == 15 && (credit / 10000000000000 == 34 || credit / 10000000000000 == 37))
        {
            printf("AMEX\n");
        }
        else if ((index == 13 || index == 16) && temp == 4)
        {
            printf("VISA\n");
        }
        else if (index == 16 && credit / 100000000000000 >= 51 && credit / 100000000000000 <= 55)
        {
            printf("MASTERCARD\n");
        }
        else
        {
            printf("INVALID\n");
        }
    }
    else
    {
        printf("INVALID\n");
    }
}
