// Assignment 7, Problem 4
// Write a program which accepts N from user and print all odd numbers up to N.
// Input : 18
// Output : 1 3 5 7 9 11 13 15 17

#include <stdio.h>
#include <stdlib.h>

///////////////////////////////////////////////////////////////
// Function Name : OddDisplay
// Description   : Prints all positive odd numbers up to N.
// Input         : Integer number
// Output        : None
// Author        : Ayush Anil Patil
// Date          : 31/10/2026
///////////////////////////////////////////////////////////////
void OddDisplay(int iNo)
{
    int iCnt = 0;

    if (iNo < 0)
    {
        iNo = -iNo;
    }

    for (iCnt = 1; iCnt <= iNo; iCnt += 2)
    {
        printf("%d ", iCnt);
    }
}

///////////////////////////////////////////////////////////////
// Function Name : main
// Description   : Reads input, calls OddDisplay, and displays the result.
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

    OddDisplay(iValue);

    return EXIT_SUCCESS;
}
