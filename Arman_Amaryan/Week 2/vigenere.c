#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int shift(char c);

int main(int argc, string argv[])
{

    if (argc != 2)
    {
        printf("Usage: ./vigenere key\n");
        return 1;
    }
    char temp;
    int n = strlen(argv[1]);
    for (int i = 0; i < n; i++)
    {
        if (!isalpha(argv[1][i]))
        {
            printf("Usage: ./vigenere key\n");
            return 1;
        }
    }
    string plaintext = get_string("plaintext: ");
    int n1 = strlen(plaintext);
    printf("ciphertext: ");
    if (n <= n1)
    {
        int pop3 = 0;
        for (int i = 0; i < n1; i++)
        {
            string k = argv[1];
            int pop1 = pop3 % strlen(k);
            char pop2 = shift(k[pop1]);
            if (plaintext[i] >= 'A' && plaintext[i] <= 'Z')
            {
                temp = ((((plaintext[i] - 'A') + pop2) % 26) + 'A');
                printf("%c", temp);
                pop3++;

            }
            else if (plaintext[i] >= 'a' && plaintext[i] <= 'z')
            {
                temp = ((((plaintext[i] - 'a') + pop2) % 26) + 'a');
                printf("%c", temp);
                pop3++;
            }
            else
            {
                printf("%c", plaintext[i]);
            }
        }
    }
    printf("\n");
}
int shift(char c)
{
    if (isupper(c))
    {
        c = c - 65;
    }
    else
    {
        c = c - 97;
    }
    return c;
}

