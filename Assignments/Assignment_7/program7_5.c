// Assignment 7, Problem 5
// Write a program which accept N and print first 5 multiples of N.
// Input : 4
// Output : 4 8 12 16 20

#include <stdio.h>
#include <stdlib.h>

///////////////////////////////////////////////////////////////
// Function Name : MultipleDisplay
// Description   : Prints the first 5 multiples of the given number.
// Input         : Integer number
// Output        : None
// Author        : Ayush Anil Patil
// Date          : 31/10/2026
///////////////////////////////////////////////////////////////
void MultipleDisplay(int iNo)
{
    int iCnt = 0;
    int iMultiple = 0;

    for (iCnt = 1; iCnt <= 5; iCnt++)
    {
        iMultiple = (iNo * iCnt);
        printf("%d ", iMultiple);
    }
}

///////////////////////////////////////////////////////////////
// Function Name : main
// Description   : Reads input, calls MultipleDisplay, and displays the result.
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

    MultipleDisplay(iValue);

    return EXIT_SUCCESS;
}
