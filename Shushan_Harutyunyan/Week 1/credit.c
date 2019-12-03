#include <math.h>
#include <cs50.h>
#include <stdio.h>

int main(void)
{
    long card_number, origin_card_number;
    int sum, multi;
    int not_multi_digits_sum = 0;
    int separated_digits_sum = 0;
    int multi_sum = 0;
    
    do
    {
        card_number = get_long("Type a valid credit card number: ");
    }
    while (card_number <= 0);
    
    origin_card_number = card_number;
        
    while (card_number != 0)
    {
        int last_digit = card_number % 10;
        not_multi_digits_sum = not_multi_digits_sum + last_digit;
        card_number = card_number / 10;
        int second_digit = card_number % 10;
        card_number = card_number / 10;        
        multi = second_digit * 2;
        if (multi >= 10)
        {
            multi = (multi / 10) + (multi % 10);
        }     
        multi_sum = multi_sum + multi;
    }
    
    sum = multi_sum + not_multi_digits_sum;
   
    if (sum % 10 == 0)
    {   
        if ((origin_card_number >= 340000000000000 && origin_card_number < 350000000000000) || 
            (origin_card_number >= 370000000000000 && origin_card_number < 380000000000000))
        {
            printf("AMEX\n");    
        }
        else if (origin_card_number >= 5100000000000000 && origin_card_number < 5600000000000000)
        {
            printf("MASTERCARD\n");    
        }    
        else if ((origin_card_number >= 4000000000000 && origin_card_number < 5000000000000) || 
                 (origin_card_number >= 4000000000000000 && origin_card_number < 5000000000000000))
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
