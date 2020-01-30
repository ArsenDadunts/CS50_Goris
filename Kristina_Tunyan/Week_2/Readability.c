#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int c;
int l;
int w = 1;
int s;


int main(void)
{
    string t = get_string("text: ");

 for (c = 0; c[t] != '\0'; c++)
    {
        if (isalnum(t[c]))
        {
            l++;
        }

        if (isspace(t[c]))
        {
            w++;
        }

        if (t[c] == '.' || t[c] == '!' || t[c] == '?')
        {
            s++;
        }


    }

float index = (0.0588 * (100 * l / w) - 0.296 * (100 * s / w) - 15.8);

if (index < 1)
{
    printf("Before Grade 1\n");
    return 0;
}

if (index >= 1 && index < 16)
{
    printf("Grade %.0f\n", index);
    return 0;
}

if (index > 16)
{
    printf("Grade 16+\n");
    return 0;
}

}
