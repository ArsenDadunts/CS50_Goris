#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)
{
    float dollars;
   int sum;
    int mnacord;
     do{
       dollars = get_float("Count: ");
     }
     while (dollars < 0);
    int cents = round(dollars * 100);
    sum = cents / 25;
    mnacord = cents % 25;
    sum+=mnacord / 10;
    mnacord = mnacord % 10;
    sum+=mnacord / 5;
    mnacord = mnacord % 5;
    sum+=mnacord;
    printf("%i", sum);

}

