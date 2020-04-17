#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
#include <stdlib.h>

int main (int argc, string argv[])
{
   if (argc != 2)
    {
        printf("Usage: ./caesar key");
        return 1;
    }
    string PlainText = get_string("plaintext: ");
    int key = atoi(argv[1]);
    printf("ciphertext: ");
    for (int i = 0; i < strlen(PlainText); i++)
    {
        if (PlainText[i] >= 'a' && PlainText[i] <= 'z')
        {
            printf("%c", (((PlainText[i] - 'a') + key) % 26) + 'a');
        }
        else if (PlainText[i] >= 'A' && PlainText[i] <= 'Z')
        {
            printf("%c", (((PlainText[i] - 'A') + key) % 26) + 'A');
        }
        else
        {
            printf("%c", PlainText[i]);
        }
    }
    printf("\n");
}


