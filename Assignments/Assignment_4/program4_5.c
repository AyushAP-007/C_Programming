// Assignment 4, Problem 5
// Check Divisibility by 5
// Accept an integer and determine whether it is divisible by 5 without leaving any remainder.
// Expected: 45 -> Divisible by 5; 23 -> Not Divisible by 5.

#include <stdio.h>
#include <stdlib.h>

///////////////////////////////////////////////////////////////
// Function Name : CheckDivisibility
// Description   : Determines whether an integer is divisible by 5.
// Input         : Integer number
// Output        : None
// Author        : Ayush Anil Patil
// Date          : 22/10/2026
///////////////////////////////////////////////////////////////
void CheckDivisibility(int iValue)
{
    if (iValue % 5 == 0)
    {
        printf("The number %d is divisible by 5.\n", iValue);
    }
    else
    {
        printf("The number %d is not divisible by 5.\n", iValue);
    }
}

///////////////////////////////////////////////////////////////
// Function Name : main
// Description   : Reads input, calls CheckDivisibility, and displays the result.
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

    CheckDivisibility(iValue);

    return EXIT_SUCCESS;
}
