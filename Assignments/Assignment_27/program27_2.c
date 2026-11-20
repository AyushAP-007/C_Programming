// Assignment 27, Problem 2: Write a program which accept string from user and count number of small characters.
// Input : "Marvellous" -> 9

#include<stdio.h>

///////////////////////////////////////////////////////////////
// Function Name : CountSmall
// Description   : Counts lowercase letters in the string.
// Input         : Character pointer str
// Output        : Integer count of lowercase letters
// Author        : Ayush Anil Patil
// Date          : 20/11/2026
///////////////////////////////////////////////////////////////
int CountSmall(char *str)
{
    int iCnt = 0;

    // Filter
    while(*str != '\0')
    {
        if((*str >= 'a') && (*str <= 'z'))
        {
            iCnt++;
        }
        str++;
    }
    return iCnt;
}

///////////////////////////////////////////////////////////////
// Function Name : main
// Description   : Reads a string, counts lowercase letters, and displays the count.
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

    iRet = CountSmall(arr);

    printf("%d",iRet);

    return 0;
}