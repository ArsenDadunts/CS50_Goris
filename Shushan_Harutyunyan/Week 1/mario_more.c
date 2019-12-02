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

    int counter = 0;
    for (int i = 0; i < tall; i++) 
    {
        if (counter != tall) 
        {
            for (int j = (tall - 1) - counter; j > 0; j--) 
            {
                printf(" ");
            }
            for (int k = 0; k <= counter; k++) 
            {
                printf("#");
            }
            printf("  ");
            for (int k = 0; k <= counter; k++) 
            {
                printf("#");
            }
            printf("\n");
            counter++;
        }
    }            
}
