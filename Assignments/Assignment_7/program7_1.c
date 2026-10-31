// Assignment 7, Problem 1
// Write a program which accept number from user and print that number of $ & * on screen.
// Input : 5
// Output : $ * $ * $ * $ * $ *
// Input : 3
// Output : $ * $ * $ *
// Input : -3
// Output : $ * $ * $ *

#include <stdio.h>
#include <stdlib.h>

///////////////////////////////////////////////////////////////
// Function Name : Pattern
// Description   : Prints the requested number of "$ *" patterns.
// Input         : Integer number
// Output        : None
// Author        : Ayush Anil Patil
// Date          : 31/10/2026
///////////////////////////////////////////////////////////////
void Pattern(int iNo)
{
    int iCnt = 0;

    if (iNo < 0)
    {
        iNo = -iNo;
    }

    for (iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("$ * ");
    }
}

///////////////////////////////////////////////////////////////
// Function Name : main
// Description   : Reads input, calls Pattern, and displays the result.
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

    Pattern(iValue);

    return EXIT_SUCCESS;
}
