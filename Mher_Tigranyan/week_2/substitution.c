#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, string argv[])
{
    int count = 0;
    if (argv[1] == NULL)
    {
        printf("Usage: ./substitution key\n");
        return 1;
    }
    if (argv[2] != NULL)
    {
        printf("Usage: ./substitution key\n");
        return 1;
    }
    for (int i = 0; i < strlen(argv[1]); i++)
    {
        if ((int) argv[1][i] < 65 || (int) argv[1][i] > 122 || ((int) argv[1][i] < 97 && (int) argv[1][i] > 90))
        {
            printf("Usage: ./caesar key\n");
            return 1;
        }
        for (int j = i + 1; j < strlen(argv[1]); j++)
        {
            if (argv[1][i] == argv[1][j])
            {
                printf("Usage: ./caesar key\n");
                return 1;
            }
        }
        count++;
    }
    if (count != 26)
    {
        printf("Usage: ./substitution key\n");
        return 1;
    }
    int a;
    int b;
    string plaintext = get_string("plaintext: ");
    printf("ciphertext: ");
    for (int n = 0; n < strlen(plaintext); n++)
    {
        if ('A' <= plaintext[n] && plaintext[n] <= 'Z')
        {
            a = (int) plaintext[n] - 65;
            if ('A' <= argv[1][a] && argv[1][a] <= 'Z')
            {
                printf("%c", argv[1][a]);
            }
            else
            {
                printf("%c", (int) argv[1][a] - 32);
            }
        }
        else if ('a' <= plaintext[n] && plaintext[n] <= 'z')
        {
            a = (int) plaintext[n] - 97;
            if (argv[1][a] < 97)
            {
                printf("%c", argv[1][a] + 32);
            }
            else
            {
                printf("%c", argv[1][a]);
            }
        }
        else
        {
            printf("%c", plaintext[n]);
        }
    }
    printf("\n");
    return 0;
}