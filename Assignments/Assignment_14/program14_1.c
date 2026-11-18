// Assignment 14, Problem 1
// Write a program which accept number from user and display its multiplication of factors.
// Input : 12
// Output : 144 (1 * 2 * 3 * 4 * 6)
// Input : 13
// Output : 1 (1)
// Input : 10
// Output : 10 (1 * 2 * 5)

#include <stdio.h>
#include <stdlib.h>

///////////////////////////////////////////////////////////////
// Function Name : MultFact
// Description   : Returns multiplication of all factors of a number.
// Input         : Integer number
// Output        : Integer product of factors
// Author        : Ayush Anil Patil
// Date          : 04/11/2026
///////////////////////////////////////////////////////////////
int MultFact(int iNo)
{
    int iCnt = 0, iMult = 1;

    for (iCnt = 1; iCnt <= (iNo / 2); iCnt++)
    {
        if ((iNo % iCnt) == 0)
        {
            iMult = (iMult * iCnt);
        }
    }
    return iMult;
}

///////////////////////////////////////////////////////////////
// Function Name : main
// Description   : Reads number, calls MultFact, and displays result.
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

    iRet = MultFact(iValue);

    printf("%d\n", iRet);

    return EXIT_SUCCESS;
}
