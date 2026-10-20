// Assignment 2, Problem 3: Print Hello when the number is below 10; otherwise print Demo.

#include <stdio.h>

///////////////////////////////////////////////////////////////
// Function Name : Display
// Description   : Prints Hello for values below 10, otherwise Demo.
// Input         : Integer to check
// Output        : None
// Author        : Ayush Anil Patil
// Date          : 20/10/2026
///////////////////////////////////////////////////////////////
void Display(int iNo)
{
    if (iNo < 10)
    {
        printf("Hello");
    }
    else
    {
        printf("Demo");
    }
}

///////////////////////////////////////////////////////////////
// Function Name : main
// Description   : Reads a number and calls Display.
// Input         : None
// Output        : None
// Author        : Ayush Anil Patil
// Date          : 20/10/2026
///////////////////////////////////////////////////////////////
int main(void)
{
    int iValue = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);
    Display(iValue);

    return 0;
}
