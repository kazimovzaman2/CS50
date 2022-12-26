#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int count_letters(string text);
int count_words(string text);
int count_sentences(string text);



int main(void)
{
    string text = get_string("Text: ");

    int letters = count_letters(text);
    int words = count_words(text);
    int sentences = count_sentences(text);

    float L = ((float) letters / (float) words) * 100;
    float S = ((float) sentences / (float) words) * 100;

    float index = 0.0588 * L - 0.296 * S - 15.8; // found grade
    int rounded = round(index); // round index

    // if big than 16
    if (rounded > 16)
    {
        printf("Grade 16+\n");
    }
    //if less than 1
    else if (rounded < 1)
    {
        printf("Before Grade 1\n");
    }
    // simple print
    else
    {
        printf("Grade %i\n", rounded);
    }



}






// Counting letters
int count_letters(string text)
{
    int count = 0;
    for (int i = 0; i < strlen(text); i++)
    {
        char c = text[i];
        if (isalpha(c) != 0)
        {
            count += 1;
        }
    }

    return count;
}


// Counting words
int count_words(string text)
{
    int count = 0;
    for (int i = 0; i < strlen(text); i++)
    {
        char c = text[i];
        if (isspace(c) != 0)
        {
            count++;
        }
    }
    return count + 1;

}



// Counting Sentences
int count_sentences(string text)
{
    int count = 0;
    for (int i = 0; i < strlen(text); i++)
    {
        char c = text[i];
        if (c == '.' || c == '!' || c == '?')
        {
            count++;
        }
    }
    return count;
}