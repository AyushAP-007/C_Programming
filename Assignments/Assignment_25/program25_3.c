// Assignment 25, Problem 3: Accept Character from user and check whether it is digit or not (0-9). 7 -> TRUE; d -> FALSE

#include<stdio.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

///////////////////////////////////////////////////////////////
// Function Name : ChkDigit
// Description   : Checks whether the character is a decimal digit.
// Input         : Character ch
// Output        : BOOL TRUE if a digit, otherwise FALSE
// Author        : Ayush Anil Patil
// Date          : 20/11/2026
///////////////////////////////////////////////////////////////
BOOL ChkDigit(char ch)
{
    if(ch >= '0' && ch <= '9')
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
// Description   : Reads a character, checks whether it is a digit, and displays the result.
// Input         : None
// Output        : Exit status
// Author        : Ayush Anil Patil
// Date          : 20/11/2026
///////////////////////////////////////////////////////////////
int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter the character");
    scanf("%c",&cValue);

    bRet = ChkDigit(cValue);

    if(bRet == TRUE)
    {
        printf("It is Digit");
    }
    else
    {
        printf("It is not a Digit");
    }

    return 0;
}