// Assignment 23, Problem 5: Write a program which accept string from user and count number of white spaces.
// Input : "MarvellouS" -> 0; "MarvellouS Infosystems" -> 1
// Input : "MarvellouS Infosystems by Piyush Manohar Khairnnar" -> 5

#include<stdio.h>

///////////////////////////////////////////////////////////////
// Function Name : CountWhite
// Description   : Counts the whitespace characters in the string.
// Input         : Character pointer str
// Output        : Integer count of whitespace characters
// Author        : Ayush Anil Patil
// Date          : 20/11/2026
///////////////////////////////////////////////////////////////
int CountWhite(char *str)
{
    int iCnt = 0;

    while(*str != '\0')
    {
        if(*str == ' ')
        {
            iCnt++;
        }
        str++;
    }
    return iCnt;
}

///////////////////////////////////////////////////////////////
// Function Name : main
// Description   : Reads a string, counts its whitespace characters, and displays the count.
// Input         : None
// Output        : Exit status
// Author        : Ayush Anil Patil
// Date          : 20/11/2026
///////////////////////////////////////////////////////////////
int main()
{
    char arr[20];
    int iRet = 0;

    printf("Enter string");
    scanf("%[^'\n']s",arr);

    iRet = CountWhite(arr);

    printf("%d",iRet);

    return 0;
}