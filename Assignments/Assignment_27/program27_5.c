// Assignment 27, Problem 5: 3. Write a program which accept string from user and display it inn reverse order.
// Input : "MarvellouS" -> "SuollevraM"

#include<stdio.h>

///////////////////////////////////////////////////////////////
// Function Name : Reverse
// Description   : Reverses the string in place and displays it.
// Input         : Character pointer str
// Output        : None
// Author        : Ayush Anil Patil
// Date          : 20/11/2026
///////////////////////////////////////////////////////////////
void Reverse(char *str)
{
    char *start = str;
    char *end = str;

    while(*end != '\0')
    {
        end++;
    }
    end--; 

    while(start < end)
    {
        char temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }

    printf("Modified string is %s",str);
}

///////////////////////////////////////////////////////////////
// Function Name : main
// Description   : Reads a string and calls Reverse to display it in reverse order.
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

    Reverse(arr);

    return 0;
}