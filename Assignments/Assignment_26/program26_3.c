// Assignment 26, Problem 3: Accept character from user. If it is capital then display all the characters from the input characters till Z. If input character is small then print all the characters in reverse order till a. In other cases return directly.
// Q -> Q R S T U V W X Y Z; m -> m l k j i h g f e d c b a; 8 ->

#include<stdio.h>

///////////////////////////////////////////////////////////////
// Function Name : Display
// Description   : Displays letters from the input character through Z, or backward through a.
// Input         : Character ch
// Output        : Sequence of letters printed to the screen
// Author        : Ayush Anil Patil
// Date          : 20/11/2026
///////////////////////////////////////////////////////////////
void Display(char ch)
{
    if(ch >= 'A' && ch <= 'Z')
    {
        for(char c = ch; c <= 'Z'; c++)
        {
            printf("%c ", c);
        }
    }
    else if(ch >= 'a' && ch <= 'z')
    {
        for(char c = ch; c >= 'a'; c--)
        {
            printf("%c ", c);
        }
    }
}

///////////////////////////////////////////////////////////////
// Function Name : main
// Description   : Reads a character and displays the corresponding letter sequence.
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