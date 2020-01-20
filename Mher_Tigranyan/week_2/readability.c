#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <math.h>

int count_letters();
int count_words();
int count_sentences();

int main(void)
{
    string text = get_string("Text: ");
    int L = (100 * count_letters(text)) / count_words(text);
    int S = (100 * count_sentences(text)) / count_words(text);
    int index = round(0.0588 * L - 0.296 * S - 15.8);
    if (index >= 16)
    {
        printf("Grade 16+\n");
    }
    else if (index <= 1)
    {
        printf("Before Grade 1\n");
    }
    else
    {
        printf("Grade %i\n", index);
    }
}

int count_letters(string text)
{
    int lettersCount = 0; 
    for (int i = 0; i < strlen(text); i++)
    {
        if ((text[i] >= 'a' && text[i] <= 'z') || (text[i] >= 'A' && text[i] <= 'Z'))
        {
            lettersCount++;
        }
    }
    return lettersCount;
}

int count_words(string text)
{
    int wordsCount = 1; 
    for (int i = 0; i < strlen(text); i++)
    {
        if (text[i] == ' ' || (text[i] == '\'' && text[i + 1] != 's'))
        {
            wordsCount++;
        }
    }
    return wordsCount;
}

int count_sentences(string text)
{
    int sentencesCount = 0; 
    for (int i = 0; i < strlen(text); i++)
    {
        if (text[i] == '.' || text[i] == '!' || text[i] == '?')
        {
            sentencesCount++;
        }
    }
    return sentencesCount;
}
