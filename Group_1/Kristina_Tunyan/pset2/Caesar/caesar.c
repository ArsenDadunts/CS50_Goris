#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>


int main(int argc, string argv[])
{
  if (argc == 2)
    {
       const int KEY = atoi(argv[1]);
       bool isKeyValid = true;
       int len = strlen(argv[1]);
       for (int i = 0; i < len; i++)
        {
          if (isdigit(argv[1][i]) == false)
            {
                isKeyValid = false;
                i = len;
            }
        }
         if (isKeyValid)
        {
            string plain = get_string("plaintext: ");
            int plainLength = strlen(plain);

            for (int i = 0; i < plainLength; i++)
            {
                if (isupper(plain[i]))
                {
                    if (plain[i] + KEY >  'Z')
                    {
                        int keyRemainder = (plain[i] + KEY) - 'Z';
                        if (keyRemainder > 'Z' - 'A')
                        {
                            while (keyRemainder >= ('Z' - 'A'))
                            {
                                keyRemainder = keyRemainder - ('Z' - 'A');
                            }
                            if (plain[i] + keyRemainder > 'Z')
                            {
                                keyRemainder = plain[i] + keyRemainder - 'Z';
                                plain[i] = 'A' + keyRemainder - 1;
                            }
                            else
                            {
                                plain[i] = 'a' + keyRemainder - 1;
                            }
                        }
                        else
                        {
                            plain[i] = 'A' + keyRemainder - 1;

                        }
                    }
                    else if (plain[i] + KEY <= 'Z')
                    {
                        plain[i] = plain[i] + KEY;
                    }
                }
                if (islower(plain[i]))
                {
                    if (plain[i] + KEY >  'z')
                    {
            int keyRemainder = (plain[i] + KEY) - ('z');
            if (keyRemainder >= 'z' - 'a')
                        {
                          while (keyRemainder >= ('z' - 'a'))
                            {
                            keyRemainder = keyRemainder - (26);
                            }
                           if (plain[i] + keyRemainder > 'z')
                            {
                                keyRemainder = plain[i] + keyRemainder - 'z';
                                plain[i] = 'a' + keyRemainder - 1;
                            }
                             else
                            {
                                plain[i] = 'a' + keyRemainder - 1;
                            }
                        }
                        else
                        {
                                plain[i] = 'a' + keyRemainder - 1;
                        }
                    }
                    else if (plain[i] + KEY <= 'z')
                    {
                        plain[i] = plain[i] + KEY;
                    }
                }
            }
             printf("ciphertext: %s\n", plain);
        }
        else
        {
            printf("Usage: ./caesar key\n");
        }
         }
 else if (argc != 2)
    {
        printf("Usage: ./caesar key\n");
        printf("1");
        return (1);
    }

}