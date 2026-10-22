// General instructions from the assignment:
// Complete the code snippets; they contain only service provider functions.
// Write an entry point function to call the helper functions separately.
// Create a separate Visual Studio project for each problem statement.

// Assignment 4, Problem 3
// Find the Greater of Two Numbers
// Accept two integers and determine which is greater; report when both are equal.
// Expected: 10 20 -> 20 is Greater; 50 30 -> 50 is Greater; 15 15 -> Both Numbers Are Equal.

#include <stdio.h>
#include <stdlib.h>

///////////////////////////////////////////////////////////////
// Function Name : FindGreater
// Description   : Determines the greater of two numbers or reports equality.
// Input         : Two integers (iFirst, iSecond)
// Output        : None
// Author        : Ayush Anil Patil
// Date          : 22/10/2026
///////////////////////////////////////////////////////////////
void FindGreater(int iFirst, int iSecond)
{
    if (iFirst > iSecond)
    {
        printf("%d is greater.\n", iFirst);
    }
    else if (iFirst < iSecond)
    {
        printf("%d is greater.\n", iSecond);
    }
    else
    {
        printf("Both numbers are equal.\n");
    }
}

///////////////////////////////////////////////////////////////
// Function Name : main
// Description   : Reads two integers, calls FindGreater, and displays the result.
// Input         : None
// Output        : Exit status
// Author        : Ayush Anil Patil
// Date          : 22/10/2026
///////////////////////////////////////////////////////////////
int main(void)
{
    int iValue1 = 0;
    int iValue2 = 0;

    printf("Enter two numbers: ");
    scanf("%d %d", &iValue1, &iValue2);

    FindGreater(iValue1, iValue2);

    return EXIT_SUCCESS;
}
