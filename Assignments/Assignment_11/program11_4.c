// Assignment 11, Problem 4
// Write a program which accept range from user and return addition of all even numbers in between that range. (Range should contains positive numbers only)
// Input : 23 30
// Output : 108
// Input : 10 18
// Output : 70
// Input : -10 2
// Output : Invalid range
// Input : 90 18
// Output : Invalid range

#include <stdio.h>
#include <stdlib.h>

///////////////////////////////////////////////////////////////
// Function Name : RangeSumEven
// Description   : Returns the sum of all even numbers in positive range.
// Input         : Integer start, Integer end
// Output        : Integer sum or -1 on invalid range
// Author        : Ayush Anil Patil
// Date          : 04/11/2026
///////////////////////////////////////////////////////////////
int RangeSumEven(int iStart, int iEnd)
{
    int iCnt = 0, iSum = 0;

    if ((iStart > iEnd) || (iStart <= 0) || (iEnd <= 0))
    {
        printf("Invalid range\n");
        return -1;
    }

    for (iCnt = iStart; iCnt <= iEnd; iCnt++)
    {
        if (iCnt % 2 == 0)
        {
            iSum = iSum + iCnt;
        }
    }

    return iSum;
}

///////////////////////////////////////////////////////////////
// Function Name : main
// Description   : Reads range, calls RangeSumEven, and prints result.
// Input         : None
// Output        : Exit status
// Author        : Ayush Anil Patil
// Date          : 04/11/2026
///////////////////////////////////////////////////////////////
int main(void)
{
    int iValue1 = 0, iValue2 = 0, iRet = 0;

    printf("Enter starting point: ");
    scanf("%d", &iValue1);

    printf("Enter ending point: ");
    scanf("%d", &iValue2);

    iRet = RangeSumEven(iValue1, iValue2);

    if (iRet != -1)
    {
        printf("Addition is %d\n", iRet);
    }

    return EXIT_SUCCESS;
}
