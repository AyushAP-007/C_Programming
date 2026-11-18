// Assignment 13, Problem 2
// Write a program which accept number from user and return the count of odd digits.
// Input : 2395
// Output : 3
// Input : 1018
// Output : 2
// Input : -1018
// Output : 2
// Input : 8462
// Output : 0

#include <stdio.h>
#include <stdlib.h>

///////////////////////////////////////////////////////////////
// Function Name : CountOdd
// Description   : Returns the count of odd digits in a number.
// Input         : Integer number
// Output        : Integer odd digits count
// Author        : Ayush Anil Patil
// Date          : 04/11/2026
///////////////////////////////////////////////////////////////
int CountOdd(int iNo)
{
    int iDigit = 0, iCount = 0;

    if (iNo < 0)
    {
        iNo = -iNo;
    }

    while (iNo != 0)
    {
        iDigit = (iNo % 10);
        if ((iDigit % 2) != 0)
        {
            iCount++;
        }
        iNo = (iNo / 10);
    }
    return iCount;
}

///////////////////////////////////////////////////////////////
// Function Name : main
// Description   : Reads number, calls CountOdd, and displays count.
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

    iRet = CountOdd(iValue);

    printf("Count of odd digits: %d\n", iRet);

    return EXIT_SUCCESS;
}
