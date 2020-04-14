#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int main(int argc, string argv[])
{
    string s = get_string("Text: ");
    float lcount = 0;
    float wcount = 0;
    float scount = 0;
    float index = 0;
    float L;
    float S;
    int grade;
    for (int i = 0; i < strlen(s); i++)
    {
        if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'))
        {
            lcount++;
        }
        if (s[i] == 32)
        {
            wcount++;
        }
        if (s[i] == 33 || s[i] == 46 || s[i] == 63)
        {
            scount++;
        }  
    }    
    S = (100 * scount) / (wcount + 1);
    L = (100 * lcount) / (wcount + 1);
    index = 0.0588 * L - 0.296 * S - 15.8;
    grade = round(index);
    if (grade < 1)
    {
        printf("Before Grade 1\n");
    }
    if (grade >= 16)
    {
        printf("Grade 16+\n");
    }
    if (grade >= 1 && grade < 16)
    {
        printf("Grade %d\n", grade);
    }
}