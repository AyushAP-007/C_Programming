// Assignment 12, Problem 2
// Write a program which accept number from user and check whether it contains 0 in it or not.
// Input : 2395
// Output : There is no Zero
// Input : 1018
// Output : It Contains Zero
// Input : 9000
// Output : It Contains Zero
// Input : 10687
// Output : It Contains Zero

#include <stdio.h>
#include <stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

///////////////////////////////////////////////////////////////
// Function Name : ChkZero
// Description   : Checks whether the given number contains 0 or not.
// Input         : Integer number
// Output        : BOOL (TRUE if contains 0, FALSE otherwise)
// Author        : Ayush Anil Patil
// Date          : 04/11/2026
///////////////////////////////////////////////////////////////
BOOL ChkZero(int iNo)
{
    int iDigit = 0;

    if (iNo == 0)
    {
        return TRUE;
    }

    if (iNo < 0)
    {
        iNo = -iNo;
    }

    while (iNo != 0)
    {
        iDigit = (iNo % 10);
        if (iDigit == 0)
        {
            return TRUE;
        }
        iNo = (iNo / 10);
    }

    return FALSE;
}

///////////////////////////////////////////////////////////////
// Function Name : main
// Description   : Reads number, calls ChkZero, and displays result.
// Input         : None
// Output        : Exit status
// Author        : Ayush Anil Patil
// Date          : 04/11/2026
///////////////////////////////////////////////////////////////
int main(void)
{
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter number: ");
    scanf("%d", &iValue);

    bRet = ChkZero(iValue);

    if (bRet == TRUE)
    {
        printf("It Contains Zero\n");
    }
    else
    {
        printf("There is no Zero\n");
    }

    return EXIT_SUCCESS;
}
