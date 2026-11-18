// Assignment 10, Problem 3
// Write a program which accept distance in kilometre and convert it into meter. (1 kilometre = 1000 Meter)
// Input : 5
// Output : 5000
// Input : 12
// Output : 12000

#include <stdio.h>
#include <stdlib.h>

///////////////////////////////////////////////////////////////
// Function Name : KMtoMeter
// Description   : Converts distance in kilometres to metres.
// Input         : Integer distance in KM
// Output        : Integer distance in metres
// Author        : Ayush Anil Patil
// Date          : 31/10/2026
///////////////////////////////////////////////////////////////
int KMtoMeter(int iNo)
{
    int iMeter = 0;

    iMeter = (iNo * 1000);

    return iMeter;
}

///////////////////////////////////////////////////////////////
// Function Name : main
// Description   : Reads distance, calls KMtoMeter, and displays the result.
// Input         : None
// Output        : Exit status
// Author        : Ayush Anil Patil
// Date          : 31/10/2026
///////////////////////////////////////////////////////////////
int main(void)
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter distance: ");
    scanf("%d", &iValue);

    iRet = KMtoMeter(iValue);

    printf("%d\n", iRet);

    return EXIT_SUCCESS;
}
