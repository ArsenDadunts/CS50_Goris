#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int height;
   do
    {
         height = get_int("Height for mario:");
    }
    while (height < 0 || height > 8);
    for (int row = 0; row < height; row++)
    {
         for (int space = 0; space < height - row - 1; space++)
        {
            printf(" ");
        }

        for (int hash = 0; hash < row + 2; hash++)
        {
            printf("#");
        }
       printf("\n");
    }
}
