// Assignment 26, Problem 5: Accept character from user and display its ASCII value in decimal, octal and hexadecimal format.
// A -> Decimal 65, Octal 0101, Hexadecimal 0X41

#include<stdio.h>

///////////////////////////////////////////////////////////////
// Function Name : Display
// Description   : Displays the character ASCII value in decimal, octal, and hexadecimal.
// Input         : Character ch
// Output        : ASCII values printed to the screen
// Author        : Ayush Anil Patil
// Date          : 20/11/2026
///////////////////////////////////////////////////////////////
void Display (char ch)
{
    printf("Decimal %d, Octal %o, Hexadecimal %X", ch, ch, ch);
}

///////////////////////////////////////////////////////////////
// Function Name : main
// Description   : Reads a character and displays its ASCII values.
// Input         : None
// Output        : Exit status
// Author        : Ayush Anil Patil
// Date          : 20/11/2026
///////////////////////////////////////////////////////////////
int main()
{
    char cValue = '\0';

    printf("Enter the character");
    scanf("%c",&cValue);

    Display(cValue);

    return 0;
}