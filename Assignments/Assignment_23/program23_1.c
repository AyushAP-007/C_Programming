// Assignment 23, Problem 1: Write a program which accept string from user and convert it into lower case.
// Input : "Marvellous Multi OS"
// Output : marvellous multi os

#include<stdio.h>

///////////////////////////////////////////////////////////////
// Function Name : strlwrx
// Description   : Converts uppercase letters in the string to lowercase.
// Input         : Character pointer str
// Output        : None
// Author        : Ayush Anil Patil
// Date          : 20/11/2026
///////////////////////////////////////////////////////////////
void strlwrx(char *str)
{
    while(*str != '\0')
    {
        if((*str >= 'A') && (*str <= 'Z'))
        {
            *str = *str + 32;
        }
        str++;
    }
}

///////////////////////////////////////////////////////////////
// Function Name : main
// Description   : Reads a string, converts it to lowercase, and displays the result.
// Input         : None
// Output        : Exit status
// Author        : Ayush Anil Patil
// Date          : 20/11/2026
///////////////////////////////////////////////////////////////
int main()
{
    char arr[20];

    printf("Enter string");
    scanf("%[^'\n']s",arr);

    strlwrx(arr);

    printf("Modified string is %s",arr);

    return 0;
}