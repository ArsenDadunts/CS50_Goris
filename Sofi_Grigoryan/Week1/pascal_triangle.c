#include <cs50.h>
#include <stdio.h>

int main(void)

{
    int i;
    int j;
    int k;
    int number = get_int("Number: ");
    while (number < 1)
    {
        printf("Number: ");
        scanf("%d", &number);
    }
    for (i = 0; i < number; i++)
    {
        for (j = i; j < number; j++)
        {
            printf(" ");
        }
        int x = 1;
        int y = i;
        int z = 1;
        for (k = 0; k <= i; k++)
        {
            printf("%d ", x);
            x = x * y;
            x = x / z;
            y--;
            z++;
        }
        printf("\n");
    }
}
