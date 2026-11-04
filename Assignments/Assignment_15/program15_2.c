// Assignment 15, Problem 2
// Write a program which accept one number from user and check whether that number is greater than 100 or not.
// Input : 101
// Output : Greater
// Input : 39
// Output : Smaller

#include <stdio.h>
#include <stdlib.h>

typedef int BOOL;

#define TRUE 1
#define FALSE 0

///////////////////////////////////////////////////////////////
// Function Name : ChkGreater
// Description   : Checks whether a number is greater than 100.
// Input         : Integer number
// Output        : BOOL (TRUE if > 100, FALSE otherwise)
// Author        : Ayush Anil Patil
// Date          : 04/11/2026
///////////////////////////////////////////////////////////////
BOOL ChkGreater(int iNo)
{
    if (iNo > 100)
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
// Description   : Reads number, calls ChkGreater, and displays Greater or Smaller.
// Input         : None
// Output        : Exit status
// Author        : Ayush Anil Patil
// Date          : 04/11/2026
///////////////////////////////////////////////////////////////
int main(void)
{
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("Please enter number: ");
    scanf("%d", &iValue);

    bRet = ChkGreater(iValue);

    if (bRet == TRUE)
    {
        printf("Greater\n");
    }
    else
    {
        printf("Smaller\n");
    }

    return EXIT_SUCCESS;
}
