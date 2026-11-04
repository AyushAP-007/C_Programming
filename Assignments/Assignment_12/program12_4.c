// Assignment 12, Problem 4
// Write a program which accept number from user and count frequency of 4 in it.
// Input : 2395
// Output : 0
// Input : 1018
// Output : 0
// Input : 9440
// Output : 2
// Input : 922432
// Output : 1

#include <stdio.h>
#include <stdlib.h>

///////////////////////////////////////////////////////////////
// Function Name : CountFour
// Description   : Counts frequency of digit 4 in given number.
// Input         : Integer number
// Output        : Integer frequency count
// Author        : Ayush Anil Patil
// Date          : 04/11/2026
///////////////////////////////////////////////////////////////
int CountFour(int iNo)
{
    int iDigit = 0, iCount = 0;

    if (iNo < 0)
    {
        iNo = -iNo;
    }

    while (iNo != 0)
    {
        iDigit = (iNo % 10);
        if (iDigit == 4)
        {
            iCount++;
        }
        iNo = (iNo / 10);
    }

    return iCount;
}

///////////////////////////////////////////////////////////////
// Function Name : main
// Description   : Reads number, calls CountFour, and displays count.
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

    iRet = CountFour(iValue);

    printf("%d\n", iRet);

    return EXIT_SUCCESS;
}
