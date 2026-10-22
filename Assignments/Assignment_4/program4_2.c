// General instructions from the assignment:
// Complete the code snippets; they contain only service provider functions.
// Write an entry point function to call the helper functions separately.
// Create a separate Visual Studio project for each problem statement.

// Assignment 4, Problem 2
// Check Even or Odd Number
// Accept an integer and determine whether it is even or odd.
// Expected: 24 -> Even Number; 17 -> Odd Number.

#include <stdio.h>
#include <stdlib.h>

///////////////////////////////////////////////////////////////
// Function Name : CheckEvenOdd
// Description   : Determines whether an integer is even or odd.
// Input         : Integer number
// Output        : None
// Author        : Ayush Anil Patil
// Date          : 22/10/2026
///////////////////////////////////////////////////////////////
void CheckEvenOdd(int iValue)
{
    if (iValue % 2 == 0)
    {
        printf("The number %d is even.\n", iValue);
    }
    else
    {
        printf("The number %d is odd.\n", iValue);
    }
}

///////////////////////////////////////////////////////////////
// Function Name : main
// Description   : Reads input, calls CheckEvenOdd, and displays the result.
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

    CheckEvenOdd(iValue);

    return EXIT_SUCCESS;
}
