// Assignment 15, Problem 4
// Write a program which accept three numbers and print its multiplication.
// Input : 5 4 7
// Output : 140
// Input : 5 0 7
// Output : 35
// Input : 5 0 0
// Output : 5
// Input : 0 0 0
// Output : 0

#include <stdio.h>
#include <stdlib.h>

///////////////////////////////////////////////////////////////
// Function Name : Multiply
// Description   : Multiplies three numbers ignoring zeros; returns 0 if all are 0.
// Input         : Integer iNo1, Integer iNo2, Integer iNo3
// Output        : Integer multiplication result
// Author        : Ayush Anil Patil
// Date          : 04/11/2026
///////////////////////////////////////////////////////////////
int Multiply(int iNo1, int iNo2, int iNo3)
{
    int iMult = 1;

    if ((iNo1 == 0) && (iNo2 == 0) && (iNo3 == 0))
    {
        return 0;
    }

    if (iNo1 != 0)
    {
        iMult = iMult * iNo1;
    }
    if (iNo2 != 0)
    {
        iMult = iMult * iNo2;
    }
    if (iNo3 != 0)
    {
        iMult = iMult * iNo3;
    }

    return iMult;
}

///////////////////////////////////////////////////////////////
// Function Name : main
// Description   : Reads three numbers, calls Multiply, and displays multiplication.
// Input         : None
// Output        : Exit status
// Author        : Ayush Anil Patil
// Date          : 04/11/2026
///////////////////////////////////////////////////////////////
int main(void)
{
    int iValue1 = 0, iValue2 = 0, iValue3 = 0, iRet = 0;

    printf("Please enter three numbers: ");
    scanf("%d %d %d", &iValue1, &iValue2, &iValue3);

    iRet = Multiply(iValue1, iValue2, iValue3);

    printf("Multiplication is: %d\n", iRet);

    return EXIT_SUCCESS;
}
