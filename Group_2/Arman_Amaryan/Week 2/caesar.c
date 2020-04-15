#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, string argv[])
{
    char temp;
    if ((argc != 2 && isdigit(argv[1]) != 0) || (argc != 2))
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }
    else
    {
        string plaintext = get_string("plaintext: ");
        printf("ciphertext: ");
        for (int i = 0; i < strlen(plaintext); i++)
        {
            int k = atoi(argv[1]);
            if (plaintext[i] >= 'A' && plaintext[i] <= 'Z')
            {
                temp = ((((plaintext[i] - 'A') + k) % 26) + 'A');
                printf("%c", temp);

            }
            else if (plaintext[i] >= 'a' && plaintext[i] <= 'z')
            {
                temp = ((((plaintext[i] - 'a') + k) % 26) + 'a');
                printf("%c", temp);

            }
            else
            {
                printf("%c", plaintext[i]);

            }
        }
        printf("\n");
    }
    return 0;
}


