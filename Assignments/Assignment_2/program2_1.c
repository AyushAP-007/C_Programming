// Assignment 2, Problem 1: Accept a number and print that number of asterisks.

#include <stdio.h>

///////////////////////////////////////////////////////////////
// Function Name : Display
// Description   : Prints iNo asterisks.
// Input         : Number of asterisks (integer)
// Output        : None
// Author        : Ayush Anil Patil
// Date          : 20/10/2026
///////////////////////////////////////////////////////////////
void Display(int iNo)
{
    int iCnt = 0;

    while (iCnt < iNo)
    {
        printf("*");
        iCnt++;
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
