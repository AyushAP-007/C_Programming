// General instructions from the assignment:
// Complete the code snippets; they contain only service provider functions.
// Write an entry point function to call the helper functions separately.
// Create a separate Visual Studio project for each problem statement.

// Assignment 3, Problem 5
// Prompt: Accept one character from the user and check whether that character is a vowel
// (a, e, i, o, u) or not.
// Input: E    Output: TRUE
// Input: d    Output: FALSE

#include<stdio.h>

typedef int BOOL ;
# define TRUE 1
# define FALSE 0

///////////////////////////////////////////////////////////////
// Function Name : ChkVowel
// Description   : Returns TRUE when the character is a vowel; otherwise returns FALSE.
// Input         : Character
// Output        : BOOL (TRUE or FALSE)
// Author        : Ayush Anil Patil
// Date          : 20/10/2026
///////////////////////////////////////////////////////////////
BOOL ChkVowel (char cChar)
{
    if (cChar == 'a' || cChar == 'A' ||
        cChar == 'e' || cChar == 'E' ||
        cChar == 'i' || cChar == 'I' ||
        cChar == 'o' || cChar == 'O' ||
        cChar == 'u' || cChar == 'U')
    {
        return TRUE;    
    }

    else
    {
        return FALSE;
    }
}

///////////////////////////////////////////////////////////////
// Function Name : main
// Description   : Reads input, calls the problem function, and displays the result.
// Input         : None
// Output        : Integer status code
// Author        : Ayush Anil Patil
// Date          : 20/10/2026
///////////////////////////////////////////////////////////////
int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;
    
    printf("Enter character\n");
    scanf("%c", &cValue);
    
    bRet = ChkVowel(cValue);
    
    if (bRet == TRUE)
    {
        printf("It is Vowel");
    }
    else
    {
        printf("It is not Vowel");
    }
    
    return 0;
}
