// Assignment 13, Problem 4
// Write a program which accept number from user and return multiplication of all digits.
// Input : 2395
// Output : 270
// Input : 1018
// Output : 8
// Input : 9440
// Output : 144
// Input : 922432
// Output : 864

#include <stdio.h>
#include <stdlib.h>

///////////////////////////////////////////////////////////////
// Function Name : MultDigits
// Description   : Returns the multiplication of all digits in a number.
// Input         : Integer number
// Output        : Integer product of digits
// Author        : Ayush Anil Patil
// Date          : 04/11/2026
///////////////////////////////////////////////////////////////
int MultDigits(int iNo)
{
    int iDigit = 0, iMult = 1;

    if (iNo == 0)
    {
        return 0;
    }

    if (iNo < 0)
    {
        iNo = -iNo;
    }

    while (iNo != 0)
    {
        iDigit = (iNo % 10);
        if (iDigit != 0)
        {
            iMult = (iMult * iDigit);
        }
        iNo = (iNo / 10);
    }
    return iMult;
}

///////////////////////////////////////////////////////////////
// Function Name : main
// Description   : Reads number, calls MultDigits, and displays result.
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

    iRet = MultDigits(iValue);

    printf("%d\n", iRet);

    return EXIT_SUCCESS;
}
