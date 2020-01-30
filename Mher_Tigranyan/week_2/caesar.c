#include <stdio.h>
#include <cs50.h>
#include <string.h> 

int main(int argc,char** argv)
{
    if (argv == NULL)
    {
        return 1;
    }
    int size = sizeof(argv)/sizeof(argv[0]);
    for (int i = 0; i < size; i++)
    {
        if(int(argv[i]) < 0 || int(argv[i]) > 9)
        {
            return 1;
        }
    }
    int k = int(argv[]);
    char c;
    string plaintext = get_string("plaintext: ");
    printf("ciphertext: ");
    for (int j = 0; j < strlen(plaintext); j++)
    {
        if (a < plaintext(j) < z  || A < plaintext(j) < Z)
        {
            c = (plaintext(j) + k) % 26;
            printf("%s", c);
        }
    }
    return 0;
    
}
