// Assignment 9, Problem 5
// Write a program which returns difference between Even factorial and odd factorial of given number.
// Input : 5
// Output : -7 (8 - 15)
// Input : -5
// Output : -7 (8 - 15)
// Input : 10
// Output : 2895 (3840 - 945)

#include <stdio.h>
#include <stdlib.h>

///////////////////////////////////////////////////////////////
// Function Name : FactorialDiff
// Description   : Returns difference between even and odd factorials.
// Input         : Integer number
// Output        : Integer difference
// Author        : Ayush Anil Patil
// Date          : 31/10/2026
///////////////////////////////////////////////////////////////
int FactorialDiff(int iNo)
{
    int iCnt = 0;
    int iEvenFact = 1;
    int iOddFact = 1;
    int iFactDiff = 0;

    if (iNo < 0)
    {
        iNo = -iNo;
    }

    for (iCnt = iNo; iCnt >= 1; iCnt--)
    {
        if ((iCnt % 2) == 0)
        {
            iEvenFact = (iEvenFact * iCnt);
        }
        else
        {
            iOddFact = (iOddFact * iCnt);
        }
    }

    iFactDiff = (iEvenFact - iOddFact);

    return iFactDiff;
}

///////////////////////////////////////////////////////////////
// Function Name : main
// Description   : Reads input, calls FactorialDiff, and displays the result.
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

    iRet = FactorialDiff(iValue);

    printf("Factorial difference is %d\n", iRet);

    return EXIT_SUCCESS;
}
