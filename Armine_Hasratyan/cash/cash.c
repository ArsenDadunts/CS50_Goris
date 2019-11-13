#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)

{
    float dollars;
    do 
    {
        dollars = get_float("Change owed: ");
    } 
    while (dollars < 0);
}

{
    int cents = round(dollars * 100);
    int coins;
    
    while (cents >= 25)         
    {
        cents = cents - 25;
        cents++;
    }
    while (cents >= 10) 
    {
        cents = cents - 10;
        cents++;
    }
    while (cents >= 5) 
    {
        cents = cents - 5;
        cents++;
    }
    while (cents >= 1) 
    {
        cents = cents - 1;
        cents++;
    }
    return coins;
}
