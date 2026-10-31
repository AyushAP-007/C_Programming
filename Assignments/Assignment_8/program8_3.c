// Assignment 8, Problem 3
// Write a program to find factorial of given number.
// Input : 5
// Output : 120 (5 * 4 * 3 * 2 * 1)
// Input : -5
// Output : 120 (5 * 4 * 3 * 2 * 1)
// Input : 4
// Output : 24 (4 * 3 * 2 * 1)

#include <stdio.h>
#include <stdlib.h>

///////////////////////////////////////////////////////////////
// Function Name : Factorial
// Description   : Calculates the factorial of a given number.
// Input         : Integer number
// Output        : Integer factorial
// Author        : Ayush Anil Patil
// Date          : 31/10/2026
///////////////////////////////////////////////////////////////
int Factorial(int iNo)
{
    int iCnt = 0;
    int iMult = 1;

    if (iNo < 0)
    {
        iNo = -iNo;
    }

    for (iCnt = 1; iCnt <= iNo; iCnt++)
    {
        iMult = (iMult * iCnt);
    }

    return iMult;
}

///////////////////////////////////////////////////////////////
// Function Name : main
// Description   : Reads input, calls Factorial, and displays the result.
// Input         : None
// Output        : Exit status
// Author        : Ayush Anil Patil
// Date          : 31/10/2026
///////////////////////////////////////////////////////////////
int main(void)
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    iRet = Factorial(iValue);

    printf("Factorial of number is %d\n", iRet);

    return EXIT_SUCCESS;
}
