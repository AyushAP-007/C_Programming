// Assignment 7, Problem 2
// Write a program which accept number from user and print numbers till that number.
// Input : 8
// Output : 1 2 3 4 5 6 7 8

#include <stdio.h>
#include <stdlib.h>

///////////////////////////////////////////////////////////////
// Function Name : Display
// Description   : Prints numbers from 1 up to the specified number.
// Input         : Integer number
// Output        : None
// Author        : Ayush Anil Patil
// Date          : 31/10/2026
///////////////////////////////////////////////////////////////
void Display(int iNo)
{
    int iCnt = 0;

    if (iNo < 0)
    {
        iNo = -iNo;
    }

    for (iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("%d ", iCnt);
    }
}

///////////////////////////////////////////////////////////////
// Function Name : main
// Description   : Reads input, calls Display, and displays the result.
// Input         : None
// Output        : Exit status
// Author        : Ayush Anil Patil
// Date          : 31/10/2026
///////////////////////////////////////////////////////////////
int main(void)
{
    int iValue = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    Display(iValue);

    return EXIT_SUCCESS;
}
