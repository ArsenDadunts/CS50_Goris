#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, string argv[])
{
    int k;
    if (argv[1] == NULL)
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }
    if (argv[2] != NULL)
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }
    for (int i = 0; i < strlen(argv[1]); i++)
    {
        if ((int) argv[1][i] < 48 || (int) argv[1][i] > 57)
        {
            printf("Usage: ./caesar key\n");
            return 1;
        }
    }
    k = atoi(argv[1]);
    int b;
    int a;
    char c[strlen(argv[1])];
    string plaintext = get_string("plaintext: ");
    printf("ciphertext: ");
    for (int j = 0; j < strlen(plaintext); j++)
    {
        if ('A' <= plaintext[j] && plaintext[j] <= 'Z')
        {
            b = ((int) plaintext[j] + k - 65);
            a = b % 26 + 65;
            printf("%c", (int) a);
        }
        else if ('a' <= plaintext[j] && plaintext[j] <= 'z')
        {
            b = ((int) plaintext[j] + k - 97);
            a = b % 26 + 97;
            printf("%c", (int) a);
        }
        else
        {
            printf("%c", plaintext[j]);
        }
    }
    printf("\n");
    return 0;
}