// Assignment 23, Problem 2: Write a program which accept string from user and convert it into upper case.
// Input : "Marvellous Multi OS"
// Output : MARVELLOUS MULTI OS

#include<stdio.h>

///////////////////////////////////////////////////////////////
// Function Name : struprx
// Description   : Converts lowercase letters in the string to uppercase.
// Input         : Character pointer str
// Output        : None
// Author        : Ayush Anil Patil
// Date          : 20/11/2026
///////////////////////////////////////////////////////////////
void struprx(char *str)
{
    while(*str != '\0')
    {
        if((*str >= 'a') && (*str <= 'z'))
        {
            *str = *str - 32;
        }
        str++;
    }
}

///////////////////////////////////////////////////////////////
// Function Name : main
// Description   : Reads a string, converts it to uppercase, and displays the result.
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

    struprx(arr);

    printf("Modified string is %s",arr);

    return 0;
}