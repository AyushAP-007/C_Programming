// Assignment 23, Problem 3: Write a program which accept string from user and toggle the case.
// Input : "Marvellous Multi OS"
// Output : mARVELLOUS mULTI os

#include<stdio.h>

///////////////////////////////////////////////////////////////
// Function Name : strtogglex
// Description   : Toggles the case of each alphabetic character in the string.
// Input         : Character pointer str
// Output        : None
// Author        : Ayush Anil Patil
// Date          : 20/11/2026
///////////////////////////////////////////////////////////////
void strtogglex(char *str)
{
    while(*str != '\0')
    {
        if((*str >= 'A') && (*str <= 'Z'))
        {
            *str = *str + 32;
        }
        else if((*str >= 'a') && (*str <= 'z'))
        {
            *str = *str - 32;
        }
        str++;
    }
}

///////////////////////////////////////////////////////////////
// Function Name : main
// Description   : Reads a string, toggles its alphabetic character case, and displays the result.
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

    strtogglex(arr);

    printf("Modified string is %s",arr);

    return 0;
}