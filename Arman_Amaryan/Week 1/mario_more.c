#include <cs50.h>
#include <stdio.h>

int get_positive_int(string prompt);
int main(void)
{
    int a = get_positive_int("Positive Integer: ");
    for (int i = 0; i < a; i++)
    {
        printf("\n");
        for (int t = a; t > i + 1; --t)
        {
            printf(" ");
        }
        for (int j = 0; j <= i; j++)
        {
            printf("#");
        }
        printf("  ");
        for (int g = a; g <= a + i; g++)
        {
            printf("#");
        }
    }
    printf("\n");
}
int get_positive_int(string prompt)
{
    int n;
    do
    {
        n = get_int("%s", prompt);
    }
    while (n < 1 || n > 8);
    return n;
}