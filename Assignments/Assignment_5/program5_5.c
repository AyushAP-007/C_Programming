// General instructions from the assignment:
// Complete the code snippets; they contain only service provider functions.
// Write an entry point function to call the helper functions separately.
// Create a separate Visual Studio project for each problem statement.

// Assignment 5, Problem 5
// Identify Character Type
// Accept a single character and determine whether it is an uppercase alphabet, lowercase alphabet, digit, or special character.
// Use character comparisons without using library character-classification functions.
// Expected: A -> Uppercase Alphabet; m -> Lowercase Alphabet; 7 -> Digit; @ -> Special Character.

#include <stdio.h>
#include <stdlib.h>

///////////////////////////////////////////////////////////////
// Function Name : CheckCharacterType
// Description   : Determines whether a character is uppercase, lowercase, digit, or special character.
// Input         : Character cValue
// Output        : None
// Author        : Ayush Anil Patil
// Date          : 22/10/2026
///////////////////////////////////////////////////////////////
void CheckCharacterType(char cValue)
{
    if ((cValue >= 'A') && (cValue <= 'Z'))
    {
        printf("The character %c is an uppercase alphabet.\n", cValue);
    }
    else if ((cValue >= 'a') && (cValue <= 'z'))
    {
        printf("The character %c is a lowercase alphabet.\n", cValue);
    }
    else if ((cValue >= '0') && (cValue <= '9'))
    {
        printf("The character %c is a digit.\n", cValue);
    }
    else
    {
        printf("The character %c is a special character.\n", cValue);
    }
}

///////////////////////////////////////////////////////////////
// Function Name : main
// Description   : Reads a character, calls CheckCharacterType, and displays the result.
// Input         : None
// Output        : Exit status
// Author        : Ayush Anil Patil
// Date          : 22/10/2026
///////////////////////////////////////////////////////////////
int main(void)
{
    char cValue = '\0';

    printf("Enter a character: ");
    scanf(" %c", &cValue);

    CheckCharacterType(cValue);

    return EXIT_SUCCESS;
}
