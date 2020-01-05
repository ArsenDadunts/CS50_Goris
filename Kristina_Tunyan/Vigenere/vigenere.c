#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int shift(char c);
string USAGE_ERROR = "Usage: ./vigenere key\n";

int main(int argc, string argv[])
{
    if (argc == 2)
    {
        int key_length = strlen(argv[1]);
        for (int i = 0; i < key_length; i++)
        {
            int is_alpha = isalpha(argv[1][i]);
            if (is_alpha != 0)
            {

            }
            else
            {

                printf("%s", USAGE_ERROR);
                return 1;
            }
        }


        string plaintext = get_string("plaintext: ");


        int plaintext_length = strlen(plaintext);

        string ciphertext = plaintext;

        for (int i = 0, j = 0; i < plaintext_length; i++)
        {
            int k = shift(argv[1][j]);


            if (ciphertext[i] >= 65 && ciphertext[i] <= 90)
            {
                ciphertext[i] = (ciphertext[i] - 65 + k) % 26 + 65;
                j = (j + 1) % key_length;
            }


            if (ciphertext[i] >= 97 && ciphertext[i] <= 122)
            {
                ciphertext[i] = (ciphertext[i] - 97 + k) % 26 + 97;
                j = (j + 1) % key_length;
            }
        }

        printf("ciphertext: %s\n", plaintext);
    }

    else
    {
        printf("%s", USAGE_ERROR);
        return 1;
    }
}

int shift(char c)
{

    if (c >= 65 && c <= 90)
    {
        c = c - 65;
    }


    if (c >= 97 && c <= 122)
    {
        c = c - 97;
    }

    return c;
}
