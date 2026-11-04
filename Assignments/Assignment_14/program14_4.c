// Assignment 14, Problem 4
// Write a program which accept number from user and return summation of all its non factors.
// Input : 12
// Output : 50
// Input : 10
// Output : 37

#include <stdio.h>
#include <stdlib.h>

///////////////////////////////////////////////////////////////
// Function Name : SumNonFact
// Description   : Returns the summation of all non-factors of a number.
// Input         : Integer number
// Output        : Integer sum of non-factors
// Author        : Ayush Anil Patil
// Date          : 04/11/2026
///////////////////////////////////////////////////////////////
int SumNonFact(int iNo)
{
    int iCnt = 0, iSum = 0;

    for (iCnt = 1; iCnt < iNo; iCnt++)
    {
        if ((iNo % iCnt) != 0)
        {
            iSum = iSum + iCnt;
        }
    }
    return iSum;
}

///////////////////////////////////////////////////////////////
// Function Name : main
// Description   : Reads number, calls SumNonFact, and displays sum.
// Input         : None
// Output        : Exit status
// Author        : Ayush Anil Patil
// Date          : 04/11/2026
///////////////////////////////////////////////////////////////
int main(void)
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    iRet = SumNonFact(iValue);

    printf("The summation of all non-factors of %d is %d\n", iValue, iRet);

    return EXIT_SUCCESS;
}
