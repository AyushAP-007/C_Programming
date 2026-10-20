// Assignment 2, Problem 5: Check whether a number is even or odd.

#include <stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

///////////////////////////////////////////////////////////////
// Function Name : ChkEven
// Description   : Returns TRUE when iNo is even, otherwise FALSE.
// Input         : Integer to check
// Output        : BOOL value
// Author        : Ayush Anil Patil
// Date          : 20/10/2026
///////////////////////////////////////////////////////////////
BOOL ChkEven(int iNo)
{
    return (iNo % 2 == 0);
}

///////////////////////////////////////////////////////////////
// Function Name : main
// Description   : Reads a number and displays whether it is even or odd.
// Input         : None
// Output        : None
// Author        : Ayush Anil Patil
// Date          : 20/10/2026
///////////////////////////////////////////////////////////////
int main(void)
{
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter number: ");
    scanf("%d", &iValue);
    bRet = ChkEven(iValue);

    if (bRet == TRUE)
    {
        printf("The number %d is even", iValue);
    }
    else
    {
        printf("The number %d is odd", iValue);
    }

    return 0;
}
