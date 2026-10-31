// Assignment 9, Problem 1
// Write a program which accept number from user and display below pattern.
// Input : 5
// Output : * * * * * # # # # #
// Input : 6
// Output : * * * * * * # # # # # #
// Input : -5
// Output : * * * * * # # # # #
// Input : 2
// Output : * * # #

#include <stdio.h>
#include <stdlib.h>

///////////////////////////////////////////////////////////////
// Function Name : Display
// Description   : Prints N asterisks followed by N hashes.
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
        printf("* ");
    }
    for (iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("# ");
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
