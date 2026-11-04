// Assignment 15, Problem 3
// Write a program which accept two numbers and check whether numbers are equal or not.
// Input : 10 10
// Output : Equal
// Input : 10 12
// Output : Not Equal
// Input : 10 -10
// Output : Not Equal

#include <stdio.h>
#include <stdlib.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0

///////////////////////////////////////////////////////////////
// Function Name : ChkEqual
// Description   : Checks whether two numbers are equal.
// Input         : Integer iNo1, Integer iNo2
// Output        : BOOL (TRUE if equal, FALSE otherwise)
// Author        : Ayush Anil Patil
// Date          : 04/11/2026
///////////////////////////////////////////////////////////////
BOOL ChkEqual(int iNo1, int iNo2)
{
    if (iNo1 == iNo2)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

///////////////////////////////////////////////////////////////
// Function Name : main
// Description   : Reads two numbers, calls ChkEqual, and displays Equal or Not Equal.
// Input         : None
// Output        : Exit status
// Author        : Ayush Anil Patil
// Date          : 04/11/2026
///////////////////////////////////////////////////////////////
int main(void)
{
    int iValue1 = 0, iValue2 = 0;
    BOOL bRet = FALSE;

    printf("Please enter two numbers: ");
    scanf("%d %d", &iValue1, &iValue2);

    bRet = ChkEqual(iValue1, iValue2);

    if (bRet == TRUE)
    {
        printf("Equal\n");
    }
    else
    {
        printf("Not Equal\n");
    }

    return EXIT_SUCCESS;
}
