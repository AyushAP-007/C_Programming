// Assignment 5, Problem 4
// Check Divisibility by 3 and 5
// Determine whether an integer is divisible by both 3 and 5, only 3, only 5, or neither.
// Expected: 15 -> Divisible by Both; 9 -> Divisible by 3 Only; 10 -> Divisible by 5 Only; 7 -> Not Divisible by Either.

#include <stdio.h>
#include <stdlib.h>

///////////////////////////////////////////////////////////////
// Function Name : CheckMultipleDivisibility
// Description   : Determines whether an integer is divisible by both 3 and 5, only 3, only 5, or neither.
// Input         : Integer number
// Output        : None
// Author        : Ayush Anil Patil
// Date          : 22/10/2026
///////////////////////////////////////////////////////////////
void CheckMultipleDivisibility(int iValue)
{
    if ((iValue % 3 == 0) && (iValue % 5 == 0))
    {
        printf("%d is divisible by both 3 and 5.\n", iValue);
    }
    else if (iValue % 3 == 0)
    {
        printf("%d is divisible by 3 only.\n", iValue);
    }
    else if (iValue % 5 == 0)
    {
        printf("%d is divisible by 5 only.\n", iValue);
    }
    else
    {
        printf("%d is not divisible by either 3 or 5.\n", iValue);
    }
}

///////////////////////////////////////////////////////////////
// Function Name : main
// Description   : Reads input, calls CheckMultipleDivisibility, and displays the result.
// Input         : None
// Output        : Exit status
// Author        : Ayush Anil Patil
// Date          : 22/10/2026
///////////////////////////////////////////////////////////////
int main(void)
{
    int iValue = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    CheckMultipleDivisibility(iValue);

    return EXIT_SUCCESS;
}
