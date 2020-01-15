#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)
{
    int count = 0;
    float changeowed = get_float("change owed:");
    while (changeowed >= 0)
    {
        changeowed = round(changeowed * 100);
        while (changeowed >= 25)
        {
            changeowed = changeowed - 25;
            count++;
        }
        while (changeowed >= 10)
        {
            changeowed = changeowed - 10;
            count++;
        }
        while (changeowed >= 5)
        {
            changeowed = changeowed - 5;
            count++;
        }
        while (changeowed >= 1)
        {
            changeowed = changeowed - 1;
            count++;
        }
        printf("%d\n", count);
        break;
    }    
    while (changeowed < 0)
    {
        printf("change owed:");
        scanf("%f", &changeowed);
    }
}

