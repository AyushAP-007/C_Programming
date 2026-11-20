// Assignment 24, Problem 2: Write a program which accept string from user and accept one character. Return frequency of that character.
// Input : "Marvellous Multi OS", M -> 2; W -> 0

#include<stdio.h>

///////////////////////////////////////////////////////////////
// Function Name : CountChar
// Description   : Counts occurrences of the specified character in the string.
// Input         : Character pointer str, character ch
// Output        : Integer frequency of ch
// Author        : Ayush Anil Patil
// Date          : 20/11/2026
///////////////////////////////////////////////////////////////
int CountChar(char *str, char ch)
{
    int iCnt = 0;

    while(*str != '\0')
    {
        if(*str == ch)
        {
            iCnt++;
        }
        str++;
    }
    return iCnt;
}

///////////////////////////////////////////////////////////////
// Function Name : main
// Description   : Reads a string and character, counts its frequency, and displays the result.
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
    
    iRet = CountChar(arr, cValue);
    
    printf("Character frequency is %d",iRet);
    
    return 0;
}