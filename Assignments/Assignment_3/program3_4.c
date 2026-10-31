// General instructions from the assignment:
// Complete the code snippets; they contain only service provider functions.
// Write an entry point function to call the helper functions separately.
// Create a separate Visual Studio project for each problem statement.
// Assignment 3, Problem 4
// Prompt: Accept a character and convert its case.
// Samples: a -> A; D -> d


#include <stdio.h>
#include<ctype.h>


///////////////////////////////////////////////////////////////
// Function Name : DisplayConvert
// Description   : Converts a lowercase letter to uppercase or uppercase to lowercase.
// Input         : Character
// Output        : None
// Author        : Ayush Anil Patil
// Date          : 20/10/2026
///////////////////////////////////////////////////////////////
void DisplayConvert(char CValue)
{
    if (islower(CValue))
    {
        printf("%c", toupper(CValue));
    }
    else if (isupper(CValue))
    {
        printf("%c", tolower(CValue));
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
    
    printf("Enter character\n");
    scanf("%c", &cValue);
    
    DisplayConvert(cValue);
    
    return 0;
}
