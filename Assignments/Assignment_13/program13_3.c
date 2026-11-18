// Assignment 13, Problem 3
// Write a program which accept number from user and return the count of digits in between 3 and 7.
// Input : 2395
// Output : 1
// Input : 1018
// Output : 0
// Input : 4521
// Output : 2
// Input : 9922
// Output : 0

#include <stdio.h>
#include <stdlib.h>

///////////////////////////////////////////////////////////////
// Function Name : CountRange
// Description   : Returns the count of digits between 3 and 7.
// Input         : Integer number
// Output        : Integer count
// Author        : Ayush Anil Patil
// Date          : 04/11/2026
///////////////////////////////////////////////////////////////
int CountRange(int iNo)
{
    int iDigit = 0, iCount = 0;

    if (iNo < 0)
    {
        iNo = -iNo;
    }

    while (iNo != 0)
    {
        iDigit = (iNo % 10);
        if ((iDigit > 3) && (iDigit < 7))
        {
            iCount++;
        }
        iNo = (iNo / 10);
    }
    return iCount;
}

///////////////////////////////////////////////////////////////
// Function Name : main
// Description   : Reads number, calls CountRange, and displays count.
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

    iRet = CountRange(iValue);

    printf("%d\n", iRet);

    return EXIT_SUCCESS;
}
