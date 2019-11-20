#include <cs50.h>
#include <stdio.h>

int main(void)

{
    int n;
    int a=0;
    int b=1;
    int c;

        int m = get_int("Enter number: ");

      for ( n=0; n<=m; n++)
    {
        c=a+b;
        a=b; b=c;
        printf("%i\n", c);
    }

}