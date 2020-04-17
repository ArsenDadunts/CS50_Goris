#include <stdio.h>
#include <cs50.h>
#include <stdbool.h>
#include <math.h>


int main(void)
{
    long long ccNumber, originalNumber;
    int totalSum = 0, digits = 0, lastDigit = 0, oddDigit = 0, evenDigit = 0, evenNumber = 0;
    bool isEven = false;
    string companyName;
    do
    {
        ccNumber = get_long_long("Enter your credit card number: ");
        if (ccNumber < 0)
        {
            printf("You must enter a positive number!\n");
        }
    }
    while (ccNumber < 0);
    originalNumber = ccNumber;
    while (ccNumber != 0)
    {
        lastDigit = ccNumber % 10;
        digits++;
        if (isEven == true)
        {
            evenNumber = lastDigit * 2;
            while (evenNumber != 0)
            {
                evenDigit += evenNumber % 10;
                evenNumber /= 10;
            }
            isEven = false;
        }
        else
        {
            oddDigit += lastDigit;
            isEven = true;
        }
        ccNumber /= 10;
    }
    totalSum = evenDigit + oddDigit;
    if (totalSum % 10 == 0)
    {
        if (digits == 15)
        {
            if ((originalNumber / (long long) pow(10, 13)) == 34 ||
                (originalNumber / (long long) pow(10, 13)) == 37)
            {
                companyName = "AMEX";
            }
            else
            {
                companyName = "INVALID";
            }
        }
        else if (digits == 16)
        {
            if ((originalNumber / (long long) pow(10, 14)) >= 51 &&
                (originalNumber / (long long) pow(10, 14)) <= 55)
            {
                companyName = "MASTERCARD";
            }
            else if ((originalNumber / (long long) pow(10, 15)) == 4)
            {
                companyName = "VISA";
            }
            else
            {
                companyName = "INVALID";
            }
        }
        else if (digits == 13)
        {
            if ((originalNumber / (long long) pow(10, 12)) == 4)
            {
                companyName = "VISA";
            }
            else
            {
                companyName = "INVALID";
            }
        }
        else
        {
            companyName = "INVALID";
        }
    }
    else
    {
        companyName = "INVALID";
    }
    printf("%s\n", companyName);

    return 0;
}
