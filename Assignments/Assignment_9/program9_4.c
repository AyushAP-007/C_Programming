// Assignment 9, Problem 4
// Write a program to find odd factorial of given number.
// Input : 5
// Output : 15 (5 * 3 * 1)
// Input : -5
// Output : 15 (5 * 3 * 1)
// Input : 10
// Output : 945 (9 * 7 * 5 * 3 * 1)

#include <stdio.h>
#include <stdlib.h>

///////////////////////////////////////////////////////////////
// Function Name : OddFactorial
// Description   : Calculates the product of all odd positive numbers up to N.
// Input         : Integer number
// Output        : Integer odd factorial
// Author        : Ayush Anil Patil
// Date          : 31/10/2026
///////////////////////////////////////////////////////////////
int OddFactorial(int iNo)
{
    int iCnt = 0;
    int iMult = 1;

    if (iNo < 0)
    {
        iNo = -iNo;
    }

    for (iCnt = iNo; iCnt >= 1; iCnt--)
    {
        if ((iCnt % 2) != 0)
        {
            iMult = (iMult * iCnt);
        }
    }
    return iMult;
}

///////////////////////////////////////////////////////////////
// Function Name : main
// Description   : Reads input, calls OddFactorial, and displays the result.
// Input         : None
// Output        : Exit status
// Author        : Ayush Anil Patil
// Date          : 31/10/2026
///////////////////////////////////////////////////////////////
int main(void)
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    iRet = OddFactorial(iValue);

    printf("Odd Factorial of number is %d\n", iRet);

    return EXIT_SUCCESS;
}
