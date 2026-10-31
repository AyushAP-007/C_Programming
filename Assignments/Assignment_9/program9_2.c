// Assignment 9, Problem 2
// Accept amount in US dollar and return its corresponding value in Indian currency. Consider 1$ as 70 rupees.
// Input : 10
// Output : 700
// Input : 3
// Output : 270
// Input : 1200
// Output : 84000

#include <stdio.h>
#include <stdlib.h>

///////////////////////////////////////////////////////////////
// Function Name : DollarToINR
// Description   : Converts US dollars to Indian currency (INR).
// Input         : Integer USD amount
// Output        : Integer INR value
// Author        : Ayush Anil Patil
// Date          : 31/10/2026
///////////////////////////////////////////////////////////////
int DollarToINR(int iNo)
{
    int iINR = 0;

    if (iNo < 0)
    {
        iNo = -iNo;
    }

    iINR = (iNo * 95);

    return iINR;
}

///////////////////////////////////////////////////////////////
// Function Name : main
// Description   : Reads USD amount, calls DollarToINR, and displays the result.
// Input         : None
// Output        : Exit status
// Author        : Ayush Anil Patil
// Date          : 31/10/2026
///////////////////////////////////////////////////////////////
int main(void)
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number of USD: ");
    scanf("%d", &iValue);

    iRet = DollarToINR(iValue);

    printf("Value in INR is %d\n", iRet);

    return EXIT_SUCCESS;
}
