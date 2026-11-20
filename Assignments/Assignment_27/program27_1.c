// Assignment 27, Problem 1: Write a program which accept string from user and count number of capital characters.
// Input : "Marvellous Multi OS" -> 4

#include<stdio.h>

///////////////////////////////////////////////////////////////
// Function Name : CountCapital
// Description   : Counts uppercase letters in the string.
// Input         : Character pointer str
// Output        : Integer count of uppercase letters
// Author        : Ayush Anil Patil
// Date          : 20/11/2026
///////////////////////////////////////////////////////////////
int CountCapital(char *str)
{
    int iCnt = 0;
    
    // Filter
    while(*str != '\0')
    {
        if((*str >= 'A') && (*str <= 'Z'))
        {
            iCnt++;
        }
        str++;
    }
    return iCnt;
}

///////////////////////////////////////////////////////////////
// Function Name : main
// Description   : Reads a string, counts uppercase letters, and displays the count.
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

    iRet = CountCapital(arr);

    printf("%d",iRet);

    return 0;
}