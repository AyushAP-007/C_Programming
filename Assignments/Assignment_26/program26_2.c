// Assignment 26, Problem 2: Accept character from user. If character is small display its corresponding capital character, and if it capital then display its corresponding small character. In other cases display as it is.
// Q -> q; m -> M; 4 -> 4; % -> %

#include<stdio.h>

///////////////////////////////////////////////////////////////
// Function Name : Display
// Description   : Displays the opposite case for a letter, or the character unchanged otherwise.
// Input         : Character ch
// Output        : Converted character printed to the screen
// Author        : Ayush Anil Patil
// Date          : 20/11/2026
///////////////////////////////////////////////////////////////
void Display(char ch)
{
    if(ch >= 'a' && ch <= 'z')
    {
        printf("%c", ch - 32);
    }
    else if(ch >= 'A' && ch <= 'Z')
    {
        printf("%c", ch + 32);
    }
    else
    {
        printf("%c", ch);
    }
}

///////////////////////////////////////////////////////////////
// Function Name : main
// Description   : Reads a character, displays its opposite case when alphabetic, and otherwise displays it unchanged.
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