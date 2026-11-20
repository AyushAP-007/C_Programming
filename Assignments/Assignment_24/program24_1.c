// Assignment 24, Problem 1: Write a program which accept string from user and accept one character. Check whether that character is present in string or not.
// Input : "Marvellous Multi OS", e -> TRUE; W -> FALSE

#include<stdio.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

///////////////////////////////////////////////////////////////
// Function Name : ChkChar
// Description   : Checks whether the specified character occurs in the string.
// Input         : Character pointer str, character ch
// Output        : BOOL TRUE if found, otherwise FALSE
// Author        : Ayush Anil Patil
// Date          : 20/11/2026
///////////////////////////////////////////////////////////////
BOOL ChkChar(char *str, char ch)
{
    while(*str != '\0')
    {
        if(*str == ch)
        {
            break;
        }
        str++;
    }

    if(*str == '\0')
    {
        return FALSE;
    }
    else
    {
        return TRUE;
    }
}

///////////////////////////////////////////////////////////////
// Function Name : main
// Description   : Reads a string and character, checks for the character, and displays the result.
// Input         : None
// Output        : Exit status
// Author        : Ayush Anil Patil
// Date          : 20/11/2026
///////////////////////////////////////////////////////////////
int main()
{
    char arr[20] = {'\0'};
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter string");
    scanf("%[^'\n']s",arr);

    printf("Enter the character");
    scanf(" %c",&cValue);

    bRet = ChkChar(arr, cValue);

    if(bRet == TRUE)
    {
        printf("Character found");
    }
    else
    {
        printf("Character not found");
    }

    return 0;
}