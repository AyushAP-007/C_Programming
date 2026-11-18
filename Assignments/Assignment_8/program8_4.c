// Assignment 8, Problem 4
// Write a program which accept number from user and display its table.
// Input : 2
// Output : 2 4 6 8 10 12 14 16 18 20
// Input : 5
// Output : 5 10 15 20 25 30 35 40 45 50
// Input : -5
// Output : 5 10 15 20 25 30 35 40 45 50

#include <stdio.h>
#include <stdlib.h>

///////////////////////////////////////////////////////////////
// Function Name : Table
// Description   : Displays the multiplication table of a number up to 10.
// Input         : Integer number
// Output        : None
// Author        : Ayush Anil Patil
// Date          : 31/10/2026
///////////////////////////////////////////////////////////////
void Table(int iNo)
{
    int iCnt = 0;
    int iMult = 0;

    if (iNo < 0)
    {
        iNo = -iNo;
    }

    for (iCnt = 1; iCnt <= 10; iCnt++)
    {
        iMult = (iNo * iCnt);
        printf("%d ", iMult);
    }
}

///////////////////////////////////////////////////////////////
// Function Name : main
// Description   : Reads input, calls Table, and displays the result.
// Input         : None
// Output        : Exit status
// Author        : Ayush Anil Patil
// Date          : 31/10/2026
///////////////////////////////////////////////////////////////
int main(void)
{
    int iValue = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    Table(iValue);

    return EXIT_SUCCESS;
}
