#include <stdio.h>
#include <cs50.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }
    int key = atoi(argv[1]);
    if (key < 0)
    {
        printf("key must be positive\n");
        return 1;
    }

    string plaintext = get_string("Plaintex: ");
    printf("ciphertext: ");
    for (int i = 0, len = strlen(plaintext); i < len; i++)
    {
        if (islower(plaintext[i]))
        {
            printf("%c", (plaintext[i] - 'a' + key) % 26 + 'a');
        }
        else if (isupper(plaintext[i]))
        {
            printf("%c", (plaintext[i] - 'A' + key) % 26 + 'A');
        }
        else
        {
            printf("%c", plaintext[i]);
        }
    }

    printf("\n");
}
