// Assignment 23, Problem 4: Write a program which accept string from user and display only digits from that string.
// Input : "marve89llous121" -> 89121
// Input : "Demo" ->

#include<stdio.h>

///////////////////////////////////////////////////////////////
// Function Name : DisplayDigit
// Description   : Displays the digit characters found in the string.
// Input         : Character pointer str
// Output        : Digits printed to the screen
// Author        : Ayush Anil Patil
// Date          : 20/11/2026
///////////////////////////////////////////////////////////////
void DisplayDigit(char *str)
{
    while(*str != '\0')
    {
        if((*str >= '0') && (*str <= '9'))
        {
            printf("%c", *str);
        }
        str++;
    }
}

///////////////////////////////////////////////////////////////
// Function Name : main
// Description   : Reads a string and displays its digit characters.
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

    DisplayDigit(arr);

    return 0;
}