#include <cs50.h>
#include <stdio.h>

int main(void)
{   
    int sum1 = 0;
    long cardnum = get_long("Number:");
    long cardnum1 = cardnum;
    long cardnum2 = cardnum;
    for (int j = 0; j < 8; j++) 
    {
        cardnum1 = cardnum1 / 10;
        int x = (cardnum1 % 10) * 2;
        int z = x / 10;
        int y = x % 10;
        sum1 = sum1 + z + y;
        cardnum1 = cardnum1 / 10;
    }
    int sum2 = 0;
    for (int j = 0; j < 8; j++) 
    {
        int x = (cardnum2 % 10);
        sum2 = sum2 + x;
        cardnum2 = cardnum2 / 100;
    }
    if (((sum1 + sum2) % 10 == 0) && (cardnum / 1000000000000000 == 4 || cardnum / 1000000000000 == 4))
    {
        printf("%s\n", "VISA");
    } 
    else if (((sum1 + sum2) % 10 == 0) && (cardnum / 100000000000000 == 51 || cardnum / 100000000000000 == 52
                                           || cardnum / 100000000000000 == 53 || cardnum / 100000000000000 == 54 || cardnum / 100000000000000 == 55))
    {
        printf("%s\n", "MASTERCARD");
    }
    else if (((sum1 + sum2) % 10 == 0) && (cardnum / 10000000000000 == 34 || cardnum / 10000000000000 == 37))
    {
        printf("%s\n", "AMEX");
    }
    else
    {
        printf("%s\n", "INVALID");  
    }
}
