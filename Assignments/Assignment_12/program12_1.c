// Assignment 12, Problem 1
// Write a program which accept number from user and display its digits in reverse order.
// Input : 2395
// Output : 5 9 3 2
// Input : 1018
// Output : 8 1 0 1
// Input : -1018
// Output : 8 1 0 1
// Input : 9000
// Output : 0 0 0 9

#include <stdio.h>
#include <stdlib.h>

///////////////////////////////////////////////////////////////
// Function Name : DisplayDigit
// Description   : Displays the digits of a number in reverse order.
// Input         : Integer number
// Output        : None
// Author        : Ayush Anil Patil
// Date          : 04/11/2026
///////////////////////////////////////////////////////////////
void DisplayDigit(int iNo)
{
    int iDigit = 0;

    if (iNo < 0)
    {
        iNo = -iNo;
    }

    if (iNo == 0)
    {
        printf("0\n");
        return;
    }

    while (iNo != 0)
    {
        iDigit = (iNo % 10);
        printf("%d ", iDigit);
        iNo = (iNo / 10);
    }
    printf("\n");
}

///////////////////////////////////////////////////////////////
// Function Name : main
// Description   : Reads number, calls DisplayDigit, and prints reversed digits.
// Input         : None
// Output        : Exit status
// Author        : Ayush Anil Patil
// Date          : 04/11/2026
///////////////////////////////////////////////////////////////
int main(void)
{
    int iValue = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    DisplayDigit(iValue);

    return EXIT_SUCCESS;
}
