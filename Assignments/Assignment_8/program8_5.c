// Assignment 8, Problem 5
// Write a program which accept number from user and display its table in reverse order.
// Input : 2
// Output : 20 18 16 14 12 10 8 6 4 2
// Input : 5
// Output : 50 45 40 35 30 25 20 15 10 5
// Input : -5
// Output : 50 45 40 35 30 25 20 15 10 5

#include <stdio.h>
#include <stdlib.h>

///////////////////////////////////////////////////////////////
// Function Name : TableRev
// Description   : Displays the multiplication table of a number in reverse order.
// Input         : Integer number
// Output        : None
// Author        : Ayush Anil Patil
// Date          : 31/10/2026
///////////////////////////////////////////////////////////////
void TableRev(int iNo)
{
    int iCnt = 0;
    int iMult = 0;

    if (iNo < 0)
    {
        iNo = -iNo;
    }

    for (iCnt = 10; iCnt >= 1; iCnt--)
    {
        iMult = (iNo * iCnt);
        printf("%d ", iMult);
    }
}

///////////////////////////////////////////////////////////////
// Function Name : main
// Description   : Reads input, calls TableRev, and displays the result.
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

    TableRev(iValue);

    return EXIT_SUCCESS;
}
