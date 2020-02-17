#include <stdio.h>
#include <cs50.h>

int main(void)
{
    long number = get_long("Input number of cedit card: ");
    int count = 0;
    int temp1 = 0;
    int temp2 = 0;
    int sum = 0;
    while (number > 0)
    {
        if (count % 2 == 0)
        {
            temp1 = number % 10;
            number = number / 10;
            sum = sum + temp1;
            count++;
        }
        else
        {
            temp2 = 2 * (number % 10);
            if (temp2 > 9)
            {
                sum = sum + (temp2 % 10) + (temp2 / 10);
            }
            else
            {
                sum  = sum + temp2;
            }
            temp2 = temp2 / 2;
            number = number / 10;
            count++;
        }
    }
    if (sum % 10 != 0)
    {
        printf("INVALID\n");
    }
    else if (count == 15 && temp1 == 3 && (temp2 == 4 || temp2 == 7))
    {
        printf("AMEX\n");
    }
    else if (count == 13 && temp1 == 4)
    {
        printf("VISA\n");
    }
    else if (count == 16 && temp2 == 4)
    {
        printf("VISA\n");
    }
    else if (count == 16 && 51 <= (temp2 * 10) + temp1 && (temp2 * 10) + temp1 <= 55)
    {
        printf("MASTERCARD\n");
    }
    else
    {
        printf("INVALID\n");
    }
}
