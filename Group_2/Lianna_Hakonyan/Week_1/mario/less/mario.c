#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int j;
    int x;
    do {
        x = get_int("input number ");
    }
    while (x > 8 || x < 1);

    for (int i = 1; i <= x; i++)
    {
        for (j = x - 1; j >= i; j--)
      {
          printf(" ");
      }
        for (int k = x - j; k <= x; k++) {
            printf("#");
        }
        printf("\n");
    }
}