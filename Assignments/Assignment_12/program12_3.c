// Assignment 12, Problem 3
// Write a program which accept number from user and count frequency of 2 in it.
// Input : 2395
// Output : 1
// Input : 1018
// Output : 0
// Input : 9000
// Output : 0
// Input : 922432
// Output : 3

#include <stdio.h>
#include <stdlib.h>

///////////////////////////////////////////////////////////////
// Function Name : CountTwo
// Description   : Counts frequency of digit 2 in given number.
// Input         : Integer number
// Output        : Integer frequency count
// Author        : Ayush Anil Patil
// Date          : 04/11/2026
///////////////////////////////////////////////////////////////
int CountTwo(int iNo)
{
    int iDigit = 0, iCount = 0;

    if (iNo < 0)
    {
        iNo = -iNo;
    }

    while (iNo != 0)
    {
        iDigit = (iNo % 10);
        if (iDigit == 2)
        {
            iCount++;
        }
        iNo = (iNo / 10);
    }

    return iCount;
}

///////////////////////////////////////////////////////////////
// Function Name : main
// Description   : Reads number, calls CountTwo, and displays count.
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

    iRet = CountTwo(iValue);

    printf("%d\n", iRet);

    return EXIT_SUCCESS;
}
