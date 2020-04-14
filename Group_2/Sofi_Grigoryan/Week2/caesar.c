#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }
    int x = atoi(argv[1]);
    int y;
    string s = get_string("plaintext: ");
    printf("ciphertext: ");
    for (int i = 0; i < strlen(s); i++)
    {
        int c = s[i];
        y = c + x;
        if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'))
        {
            if ((c + x > 'Z' && c + x < 'a') || (c  + x > 'z'))
            {
                while ((s[i] >= 'a' && s[i] <= 'z') && (y > 'z'))
                {
                    y = y - 26;
                }
                while ((s[i] >= 'A' && s[i] <= 'Z') && (y > 'Z'))
                {
                    y = y - 26;
                }
                printf("%c", y);
            }
            else
            {
                printf("%c", c + x);
            }
        }
        else 
        {
            printf("%c", s[i]);
        }
    }
    printf("\n");
}
