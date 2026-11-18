// Assignment 13, Problem 1
// Write a program which accept number from user and return the count of even digits.
// Input : 2395
// Output : 1
// Input : 1018
// Output : 2
// Input : -1018
// Output : 2
// Input : 8462
// Output : 4

#include <stdio.h>
#include <stdlib.h>

///////////////////////////////////////////////////////////////
// Function Name : CountEven
// Description   : Returns the count of even digits in a number.
// Input         : Integer number
// Output        : Integer even digits count
// Author        : Ayush Anil Patil
// Date          : 04/11/2026
///////////////////////////////////////////////////////////////
int CountEven(int iNo)
{
    int iDigit = 0, iCount = 0;

    if (iNo == 0)
    {
        return 1;
    }

    if (iNo < 0)
    {
        iNo = -iNo;
    }

    while (iNo != 0)
    {
        iDigit = (iNo % 10);
        if ((iDigit % 2) == 0)
        {
            iCount++;
        }
        iNo = (iNo / 10);
    }
    return iCount;
}

///////////////////////////////////////////////////////////////
// Function Name : main
// Description   : Reads number, calls CountEven, and displays count.
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

    iRet = CountEven(iValue);

    printf("Count of even digits: %d\n", iRet);

    return EXIT_SUCCESS;
}
