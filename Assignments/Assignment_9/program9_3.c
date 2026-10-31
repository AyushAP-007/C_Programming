// Assignment 9, Problem 3
// Write a program to find even factorial of given number.
// Input : 5
// Output : 8 (4 * 2)
// Input : -5
// Output : 8 (4 * 2)
// Input : 10
// Output : 3840 (10 * 8 * 6 * 4 * 2)

#include <stdio.h>
#include <stdlib.h>

///////////////////////////////////////////////////////////////
// Function Name : EvenFactorial
// Description   : Calculates the product of all even positive numbers up to N.
// Input         : Integer number
// Output        : Integer even factorial
// Author        : Ayush Anil Patil
// Date          : 31/10/2026
///////////////////////////////////////////////////////////////
int EvenFactorial(int iNo)
{
    int iCnt = 0;
    int iMult = 1;

    if (iNo < 0)
    {
        iNo = -iNo;
    }

    for (iCnt = iNo; iCnt >= 2; iCnt--)
    {
        if ((iCnt % 2) == 0)
        {
            iMult = (iMult * iCnt);
        }
    }
    return iMult;
}

///////////////////////////////////////////////////////////////
// Function Name : main
// Description   : Reads input, calls EvenFactorial, and displays the result.
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

    iRet = EvenFactorial(iValue);

    printf("Even Factorial of number is %d\n", iRet);

    return EXIT_SUCCESS;
}
