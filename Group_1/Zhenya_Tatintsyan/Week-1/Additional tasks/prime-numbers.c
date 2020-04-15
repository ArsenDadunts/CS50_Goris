#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)
{
    int count = 0;
    for (int i = 1; i <= 100; i++)
    {
        for (int a = 1; a <= 100; a++)
        {
            if (i % a == 0)
            {
                count +=1;
            }
       }
        if (count <= 2)
            {
                printf("%i\n", i);
            }
     count=0;
    }
}