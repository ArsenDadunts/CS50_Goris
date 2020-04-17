#include <cs50.h>
#include <stdio.h>

int get_positive_int(string prompt);

int main(void)
{
    int i = get_positive_int("Positive integer: ");
}

int get_positive_int(string prompt)
{
    int n;
    do
    {
        n = get_int("%s", prompt);
    }
    while (n < 1 || n>8);

      for (int i = 0; i < n; i++)
  {

      for (int j = n - i; j>1; j--)
      {
          printf(" ");
      }

      for (int j = 0; j <= i; j++)
        {
          printf("#");
        }
      printf("\n");
  }
    return n;
}