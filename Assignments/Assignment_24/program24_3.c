// Assignment 24, Problem 3: Write a program which accept string from user and accept one character. Return index of first occurrence of that character.
// Input : "Marvellous Multi OS", M -> 0; W -> -1; e -> 4

#include<stdio.h>

///////////////////////////////////////////////////////////////
// Function Name : FirstChar
// Description   : Finds the index of the first occurrence of the specified character.
// Input         : Character pointer str, character ch
// Output        : Integer index, or -1 if not found
// Author        : Ayush Anil Patil
// Date          : 20/11/2026
///////////////////////////////////////////////////////////////
int FirstChar(char *str, char ch)
{
    int iCnt = 0;

    while(*str != '\0')
    {
        if(*str == ch)
        {
            break;
        }
        iCnt++;
        str++;
    }

    if(*str == '\0')
    {
        return -1;
    }
    else
    {
        return iCnt;
    }
}

///////////////////////////////////////////////////////////////
// Function Name : main
// Description   : Reads a string and character, finds the first matching index, and displays it.
// Input         : None
// Output        : Exit status
// Author        : Ayush Anil Patil
// Date          : 20/11/2026
///////////////////////////////////////////////////////////////
int main()
{
    char arr[20] = {'\0'};
    char cValue = '\0';
    int iRet = 0;
    
    printf("Enter string");
    scanf("%[^'\n']s",arr);
    
    printf("Enter the character");
    scanf(" %c",&cValue);
    
    iRet = FirstChar(arr, cValue);
    
    printf("Character location is %d",iRet);
    
    return 0;
}