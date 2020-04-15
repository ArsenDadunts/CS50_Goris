#include <cs50.h>
#include <stdio.h>

int main(void)
{
    long number;
    int digits = 0;
    int sum = 0;
    int temp;
    int index = 0;
    do
    {
        number = get_long("Number: ");
    }
    while (number < 0);
    long credit = number;

    while (number > 0)
    {
        if (index % 2 == 1)
        {
            temp = 2 * (number % 10);
            number = number / 10;
            if (temp >= 10)
            {
                sum += (temp % 10) + 1;
            }
            else
            {
                sum += temp;
            }
        }
        else
        {
            temp = number % 10;
            sum += temp;
            number = number / 10;
        }
        index++;
    }
    printf("%i\n", sum);
    if (sum % 10 == 0)
    {
        if ((credit >= 340000000000000 && credit <= 349999999999999)
            || (credit >= 370000000000000 && credit <= 379999999999999))
        {
            printf("AMEX\n");
        }
        else if ((credit >= 5100000000000000 && credit <= 5599999999999999))
        {
            printf("MasterCard\n");
        }
        else if ((credit >= 4000000000000 && credit <= 4999999999999)
                 || (credit >= 4000000000000000 && credit <= 4999999999999999))
        {
            printf("VISA\n");
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
