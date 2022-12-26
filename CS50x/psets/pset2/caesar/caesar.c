#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>


// Function's prototipe
int only_digit(string text);
char rotate(char c, int n);



int main(int argc, string argv[])
{
    // Invalid time
    if (argc != 2 || !only_digit(argv[1]))
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }
    // Valid time
    else
    {
        // Get plaintext
        int key = atoi(argv[1]);
        string plaintext = get_string("plaintext: ");


        // print chipertext
        printf("ciphertext: ");

        for (int i = 0; i < strlen(plaintext); i++)
        {
            printf("%c", rotate(plaintext[i], key));
        }
        printf("\n");
    }
}








// This function for take just only digit number
int only_digit(string text)
{
    for (int i = 0; i < strlen(text); i++)
    {
        if (!isdigit(text[i]))
        {
            return 0;
        }
    }
    return 1;
}



// This function for changing letter by n
char rotate(char c, int n)
{
    if (isalpha(c))
    {
        if (isupper(c))
        {
            char result = (((c - 65 + n) % 26) + 65);
            return result;
        }
        else
        {
            char result = (((c - 97 + n) % 26) + 97);
            return result;
        }
    }

    else
    {
        return c;
    }
}