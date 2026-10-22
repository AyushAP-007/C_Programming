// General instructions from the assignment:
// Complete the code snippets; they contain only service provider functions.
// Write an entry point function to call the helper functions separately.
// Create a separate Visual Studio project for each problem statement.

// Assignment 4, Problem 1
// Check Whether a Number Is Positive or Negative
// Accept an integer and determine whether it is positive, negative, or zero.
// Expected: 15 -> Positive Number; -8 -> Negative Number; 0 -> Zero.

#include <stdio.h>
#include <stdlib.h>

///////////////////////////////////////////////////////////////
// Function Name : CheckNumber
// Description   : Determines whether the number is positive, negative, or zero.
// Input         : Integer number
// Output        : None
// Author        : Ayush Anil Patil
// Date          : 22/10/2026
///////////////////////////////////////////////////////////////
void CheckNumber(int iValue)
{
    if (iValue > 0)
    {
        printf("The number %d is positive.\n", iValue);
    }
    else if (iValue < 0)
    {
        printf("The number %d is negative.\n", iValue);
    }
    else
    {
        printf("The number %d is zero.\n", iValue);
    }
}

///////////////////////////////////////////////////////////////
// Function Name : main
// Description   : Reads input, calls CheckNumber, and displays the result.
// Input         : None
// Output        : Exit status
// Author        : Ayush Anil Patil
// Date          : 22/10/2026
///////////////////////////////////////////////////////////////
int main(void)
{
    int iValue = 0;

    printf("Enter a number: ");
    scanf("%d", &iValue);

    CheckNumber(iValue);

    return EXIT_SUCCESS;
}
