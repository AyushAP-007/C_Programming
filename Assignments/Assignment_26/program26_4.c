// Assignment 26, Problem 4: Accept Character from user and check whether it is special symbol or not (!, @, #, $, %, ^, &, *). % -> TRUE; d -> FALSE

#include<stdio.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

///////////////////////////////////////////////////////////////
// Function Name : ChkSpecial
// Description   : Checks whether the character is one of the specified special symbols.
// Input         : Character ch
// Output        : BOOL TRUE if special, otherwise FALSE
// Author        : Ayush Anil Patil
// Date          : 20/11/2026
///////////////////////////////////////////////////////////////
BOOL ChkSpecial(char ch)
{
    if((ch == '!') || (ch == '@') || (ch == '#') || (ch == '$') || (ch == '%') || (ch == '^') || (ch == '&') || (ch == '*'))
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
// Description   : Reads a character, checks whether it is a specified special symbol, and displays the result.
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

    bRet = ChkSpecial(cValue);

    if(bRet == TRUE)
    {
        printf("It is special Character");
    }
    else
    {
        printf("It is not a special Character");
    }

    return 0;
}