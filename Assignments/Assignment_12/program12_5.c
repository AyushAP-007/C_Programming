// Assignment 12, Problem 5
// Write a program which accept number from user and count frequency of such a digits which are less than 6.
// Input : 2395
// Output : 3
// Input : 1018
// Output : 3
// Input : 9440
// Output : 3
// Input : 96672
// Output : 1

#include <stdio.h>
#include <stdlib.h>

///////////////////////////////////////////////////////////////
// Function Name : Count
// Description   : Counts frequency of digits less than 6.
// Input         : Integer number
// Output        : Integer frequency count
// Author        : Ayush Anil Patil
// Date          : 04/11/2026
///////////////////////////////////////////////////////////////
int Count(int iNo)
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
        if (iDigit < 6)
        {
            iCount++;
        }
        iNo = (iNo / 10);
    }

    return iCount;
}

///////////////////////////////////////////////////////////////
// Function Name : main
// Description   : Reads number, calls Count, and displays result.
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

    iRet = Count(iValue);

    printf("%d\n", iRet);

    return EXIT_SUCCESS;
}
