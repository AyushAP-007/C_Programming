// Assignment 14, Problem 5
// Write a program which accept number from user and return difference between summation of all its factors and non factors.
// Input : 12
// Output : -34 (16 - 50)
// Input : 10
// Output : -29 (8 - 37)

#include <stdio.h>
#include <stdlib.h>

///////////////////////////////////////////////////////////////
// Function Name : FactDiff
// Description   : Returns difference between sum of factors and non-factors.
// Input         : Integer number
// Output        : Integer difference
// Author        : Ayush Anil Patil
// Date          : 04/11/2026
///////////////////////////////////////////////////////////////
int FactDiff(int iNo)
{
    int iCnt = 0, iFactSum = 0, iNonFactSum = 0;

    for (iCnt = 1; iCnt <= (iNo / 2); iCnt++)
    {
        if ((iNo % iCnt) == 0)
        {
            iFactSum = iFactSum + iCnt;
        }
    }

    for (iCnt = 1; iCnt < iNo; iCnt++)
    {
        if ((iNo % iCnt) != 0)
        {
            iNonFactSum = iNonFactSum + iCnt;
        }
    }

    return (iFactSum - iNonFactSum);
}

///////////////////////////////////////////////////////////////
// Function Name : main
// Description   : Reads number, calls FactDiff, and displays result.
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

    iRet = FactDiff(iValue);

    printf("The difference between summation of factors and non-factors of %d is %d\n", iValue, iRet);

    return EXIT_SUCCESS;
}
