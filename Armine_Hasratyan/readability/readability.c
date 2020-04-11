#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int main(void)
{
    string text = get_string("Text: ");
    int letters = 0;
    int words = 1;
    int sentences = 0;

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
    float L = letters / words * 100;
    float S = sentences / words * 100;
    float index = 0.0588 * L - 0.296 * S - 15.8;
    int index1 = round(index);

    if (index1 >= 1 && index1 <= 16)
    {
        printf("Grade %i\n", index1);
    }
    else
    {
        if (index1 < 1)
        {
            printf("Before Grade 1\n");
        }
        if (index1 > 16)
        {
            printf("Grade 16+\n");
        }
    }
}