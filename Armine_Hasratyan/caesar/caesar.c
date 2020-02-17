#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("Usage: ./caesar key");
        return 1;
    }
    int k = atoi(argv[1]);
    string s = get_string("plaintext: ");
    printf("ciphertext: ");
    for (int i = 0; i < strlen(s); i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            printf("%c", (((s[i] - 'a') + k) % 26) + 'a');
        }
        else if (s[i] >= 'A' && s[i] <= 'Z')
        {
            printf("%c", (((s[i] - 'A') + k) % 26) + 'A');
        }
        else
        {
            printf("%c", s[i]);
        }
    }
    printf("\n");
}
