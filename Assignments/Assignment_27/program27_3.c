// Assignment 27, Problem 3: Write a program which accept string from user and return difference between frequency of small characters and frequency of capital characters.
// Input : "MarvellouS" -> 6 (8-2)

#include<stdio.h>

///////////////////////////////////////////////////////////////
// Function Name : Difference
// Description   : Returns the lowercase count minus the uppercase count in the string.
// Input         : Character pointer str
// Output        : Integer difference
// Author        : Ayush Anil Patil
// Date          : 20/11/2026
///////////////////////////////////////////////////////////////
int Difference(char *str)
{
    int iCnt = 0;
    
    // Filter
    while(*str != '\0')
    {
        if((*str >= 'a') && (*str <= 'z'))
        {
            iCnt++;
        }
        else if((*str >= 'A') && (*str <= 'Z'))
        {
            iCnt--;
        }
        str++;
    }
    return iCnt;
}

///////////////////////////////////////////////////////////////
// Function Name : main
// Description   : Reads a string, computes the lowercase minus uppercase count, and displays the result.
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

    iRet = Difference(arr);

    printf("%d",iRet);

    return 0;
}