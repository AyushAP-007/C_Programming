// Assignment 10, Problem 5
// Write a program which accept area in square feet and convert it into square meter. (1 square feet = 0.0929 Square meter)
// Input : 5
// Output : 0.464515
// Input : 7
// Output : 0.650321

#include <stdio.h>
#include <stdlib.h>

///////////////////////////////////////////////////////////////
// Function Name : SquareMeter
// Description   : Converts area in square feet to square metres.
// Input         : Integer area in square feet
// Output        : Double area in square metres
// Author        : Ayush Anil Patil
// Date          : 31/10/2026
///////////////////////////////////////////////////////////////
double SquareMeter(int iValue)
{
    double dSqMeter = 0.0;

    dSqMeter = (iValue * 0.092903);

    return dSqMeter;
}

///////////////////////////////////////////////////////////////
// Function Name : main
// Description   : Reads square feet, calls SquareMeter, and displays the result.
// Input         : None
// Output        : Exit status
// Author        : Ayush Anil Patil
// Date          : 31/10/2026
///////////////////////////////////////////////////////////////
int main(void)
{
    int iValue = 0;
    double dRet = 0.0;

    printf("Enter area in square feet: ");
    scanf("%d", &iValue);

    dRet = SquareMeter(iValue);

    printf("Area in square meters is: %lf\n", dRet);

    return EXIT_SUCCESS;
}
