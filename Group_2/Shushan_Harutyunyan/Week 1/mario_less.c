#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int tall;
    do
    {
        tall = get_int("Give a positive integer between 1 and 8 inclusive.\n");
    }
    while (tall < 1 || tall > 8);
    
    for (int i = 0; i < tall; i++)
    {
        for (int j = tall - 1; j > i; j--)
        {
            printf(" ");
        }    
        for (int k = 0; k <= i; k++)  
        {
            printf("#");
        }
        printf("\n");
    }
}
