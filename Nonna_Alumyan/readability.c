#include <stdio.h>
#include <cs50.h>
#include <ctype.h>
#include <string.h>

int letter;
int word;
int sentence;


int main(void)
{

    string text = get_string("Text: ");

    int n = strlen(text);

    if (isalnum(text[0]))
    {
        word = 1;
    }

    for (int i = 0; i < n;  i++)
    {
        // letters

        if (isalnum(text[i]))
        {
            letter++;
        }

        // words

        if (i < n - 1 && isspace(text[i]) && isalnum(text[i + 1]))
        {
            word++;
        }

        // sentences

        if (i > 0 && (text[i] == '!' || text[i] == '?' || text[i] == '.') && isalnum(text[i - 1]))
        {
            sentence++;
        }

    }

// Coleman-Liau index

    int grade = 0.0588 * (100 * letter / word) - 0.296 * (100 * sentence / word) - 15.8;

    printf("Letters: %i\nWords: %i\nSentences: %i\n", letter, word, sentence);

// print result
    if (grade <= 1)
    {
        printf("Before Grade 1\n");
    }
    else if (grade < 16)
    {
        printf("Grade %i\n", grade);
    }
    else
    {
        printf("Grade 16+\n");
    }
}

