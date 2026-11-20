// Assignment 24, Problem 4: Write a program which accept string from user and accept one character. Return index of last occurrence of that character.
// Input : "Marvellous Multi OS", M -> 11; W -> -1; e -> 4

#include<stdio.h>

///////////////////////////////////////////////////////////////
// Function Name : LastChar
// Description   : Finds the index of the last occurrence of the specified character.
// Input         : Character pointer str, character ch
// Output        : Integer index, or -1 if not found
// Author        : Ayush Anil Patil
// Date          : 20/11/2026
///////////////////////////////////////////////////////////////
int LastChar(char *str, char ch)
{
    int iCnt = 0;
    int iLastIndex = 0;
    iLastIndex = -1;

    while(*str != '\0')
    {
        if(*str == ch)
        {
            iLastIndex = iCnt;
        }
        iCnt++;
        str++;
    }

    return iLastIndex;
}

///////////////////////////////////////////////////////////////
// Function Name : main
// Description   : Reads a string and character, finds the last matching index, and displays it.
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
    
    iRet = LastChar(arr, cValue);
    
    printf("Character location is %d",iRet);
    
    return 0;
}