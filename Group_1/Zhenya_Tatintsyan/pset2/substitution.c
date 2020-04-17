#include <stdio.h>
#include <cs50.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("Usage: ./substitution key\n");
        return 1;
    }
    string key = argv[1];
    if (strlen(key) != 26)
    {
        printf("Key must contain 26 characters.\n");
        return 1;
    }
    for (int i = 0; i < strlen(key); i++)
    {
        if (!isalpha(key[i]))
        {
            printf("The key should containt only letters.\n");
            return 1;
        }
        else
        {
            int count = 1;
            for (int n = i + 1; n < strlen(key); n++)
            {
                if (key[i] == key[n])
                {
                    count++;
                }
                if (count >= 2)
                {
                    printf("There should not be any repeated character.\n");
                    return 1;
                }
            }
        }

    }

    string plaintext = get_string("plaintext: ");
    printf("ciphertext: ");

    char alphabet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

    for (int k = 0; k < strlen(plaintext); k++)
    {
        if (!isalpha(plaintext[k]))
        {
            printf("%c", plaintext[k]);
        }
        for (int p = 0; p < strlen(alphabet); p++)
        {
            if (plaintext[k] == alphabet[p] && isupper(argv[1][p]))
            {
                printf("%c", argv[1][p]);
            }

            if (plaintext[k] == (alphabet[p]) && islower(argv[1][p]))
            {
                printf("%c", toupper(argv[1][p]));
            }

            if (plaintext[k] == tolower(alphabet[p]) && isupper(argv[1][p]))
            {
                printf("%c", tolower(argv[1][p]));
            }

            if (plaintext[k] == tolower(alphabet[p]) && islower(argv[1][p]))
            {
                printf("%c", tolower(argv[1][p]));
            }
        }
    }
    printf("\n");
    return 0;
}
