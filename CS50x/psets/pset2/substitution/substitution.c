#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>


// only_char prototype
int only_char(string text);




int main(int argc, string argv[])
{
    // when argc is not 2 or key input is not character enroll error
    if (argc != 2 || !only_char(argv[1]))
    {
        printf("Usage: ./substitution key\n");
        return 1;
    }

    // if key input is not equal 26 enroll error
    else if (strlen(argv[1]) != 26)
    {
        printf("Key must contain 26 characters.\n");
        return 1;
    }


    // when there is same key enroll error
    for (int i = 0; i < strlen(argv[1]); i++)
    {
        for (int j = i + 1; j < strlen(argv[1]); j++)
        {
            if (toupper(argv[1][i]) == toupper(argv[1][j]))
            {
                printf("Usage: ./substitution key\n");
                return 1;
            }
        }
    }


    // start chiping
    string key = argv[1];
    string plaintext = get_string("plaintext: ");


    for (int i = 0; i < strlen(key); i++)
    {
        if (islower(key[i]))
        {
            key[i] = key[i] - 32;
        }
    }

    printf("chipertext: ");

    for (int i = 0; i < strlen(plaintext); i++)
    {
        if (isupper(plaintext[i]))
        {
            int letter = plaintext[i] - 65;
            printf("%c", key[letter]);
        }
        else if (islower(plaintext[i]))
        {
            int letter = plaintext[i] - 97;
            printf("%c", key[letter] + 32);
        }
        else
        {
            printf("%c", plaintext[i]);
        }

    }
    printf("\n");
}







// only_char function which select just character
int only_char(string text)
{
    for (int i = 0; i < strlen(text); i++)
    {
        if (!isalpha(text[i]))
        {
            return 0;
        }
    }
    return 1;
}