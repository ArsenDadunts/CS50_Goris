#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("Usage: ./substitution key\n");
        return 1;
    }
    if (strlen(argv[1]) != 26)
    {
        printf("Key must contain 26 characters.\n");
        return 1;
    }
    for (int k = 0; k < strlen(argv[1]); k++)
    {
        if (argv[1][k] < 'A' || (argv[1][k] > 'Z' && argv[1][k] < 'a') || argv[1][k] > 'z')
        {
            return 1;
        }
        if (argv[1][k] == tolower(argv[1][k + 1]) || argv[1][k] == toupper(argv[1][k + 1]))
        {
            return 1;
        }
    }
    char str[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    string s = get_string("plaintext: ");
    printf("ciphertext: ");
    for (int i = 0; i < strlen(s); i++)
    {
        if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'))
        {
            for (int j = 0; j < strlen(str); j++)
            {
                if ((s[i] == str[j]) && isupper(argv[1][j]))
                {
                    printf("%c", argv[1][j]);
                }
                else if ((s[i] == str[j]) && islower(argv[1][j]))
                {
                    printf("%c", toupper(argv[1][j]));
                }
                else if ((s[i] == tolower(str[j])) && isupper(argv[1][j]))
                {
                    printf("%c", tolower(argv[1][j]));
                }
                else if ((s[i] == tolower(str[j])) && islower(argv[1][j]))
                {
                    printf("%c", argv[1][j]);
                }
            }
        }
        else
        {
            printf("%c", s[i]);
        }
    }
    printf("\n");
}
