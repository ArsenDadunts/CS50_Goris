#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int main(void)
{
    string text = get_string("Enter your text: ");

    float letters = 0, words = 1, sentences = 0;
    for (int i = 0, n = strlen(text); i < n; i++)
    {
        if (isalpha(text[i]))
            {
                letters++;
            }
            if (isspace(text[i]))
            {
                words++;
            }
            if (text[i] == '.' || text[i] == '!' || text[i] == '?')
            {
            sentences++;
            }
        }

    float l = letters / words * 100;
    float s = sentences / words * 100;
    float index = 0.0588 * l - 0.296 * s - 15.8;
    int indexi = round(index);
    index--;

    if (indexi >= 1 && indexi <=16)
        {
            printf("Grade %i\n", indexi);
        }
    else
    {
        if (indexi < 1)
        {
            printf("Before Grade 1\n");
        }
        if (indexi > 16)
        {
            printf("Grade 16+\n");
        }
    }
}
