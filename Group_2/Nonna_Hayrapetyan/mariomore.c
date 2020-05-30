#include <cs50.h>
#include <stdio.h>
int main(void)
{
     int num;
    do 
{
    num = get_int("Height ");
}
  while (num <=0 || num > 8);
    for (int i = 0; i < num; i++)
    {
        for (int j = i; j < num - 1; j++)
        {
            printf(" ");
        }
        for (int k = 0; k < i + 1; k++)
        {
            printf("#");
        }
        printf("  ");
        for (int y = 0; y < i + 1; y++)
        {
            printf("#");
        }
        printf("\n");
    }
}
