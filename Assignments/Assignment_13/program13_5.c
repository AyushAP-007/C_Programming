// Assignment 13, Problem 5
// Write a program which accept number from user and return difference between summation of even digits and summation of odd digits.
// Input : 2395
// Output : -15 (2 - 17)
// Input : 1018
// Output : 6 (8 - 2)
// Input : 8440
// Output : 16 (16 - 0)
// Input : 5733
// Output : -18 (0 - 18)

#include <stdio.h>
#include <stdlib.h>

///////////////////////////////////////////////////////////////
// Function Name : CountDiff
// Description   : Returns difference between sum of even digits and sum of odd digits.
// Input         : Integer number
// Output        : Integer difference
// Author        : Ayush Anil Patil
// Date          : 04/11/2026
///////////////////////////////////////////////////////////////
int CountDiff(int iNo)
{
    int iDigit = 0, iEvenSum = 0, iOddSum = 0;

    if (iNo < 0)
    {
        iNo = -iNo;
    }

    while (iNo != 0)
    {
        iDigit = (iNo % 10);
        if ((iDigit % 2) == 0)
        {
            iEvenSum = iEvenSum + iDigit;
        }
        else
        {
            iOddSum = iOddSum + iDigit;
        }
        iNo = (iNo / 10);
    }
    return (iEvenSum - iOddSum);
}

///////////////////////////////////////////////////////////////
// Function Name : main
// Description   : Reads number, calls CountDiff, and displays difference.
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

    iRet = CountDiff(iValue);

    printf("%d\n", iRet);

    return EXIT_SUCCESS;
}
