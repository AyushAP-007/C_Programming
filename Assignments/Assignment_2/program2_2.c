// Assignment 2, Problem 2: Print asterisks using a decrementing loop.

#include <stdio.h>

///////////////////////////////////////////////////////////////
// Function Name : Display
// Description   : Prints iNo asterisks while counting down.
// Input         : Number of asterisks (integer)
// Output        : None
// Author        : Ayush Anil Patil
// Date          : 20/10/2026
///////////////////////////////////////////////////////////////
void Display(int iNo)
{
    while (iNo > 0)
    {
        printf("*");
        iNo--;
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
