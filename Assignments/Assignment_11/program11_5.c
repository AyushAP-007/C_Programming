// Assignment 11, Problem 5
// Write a program which accept accept range from user and display all numbers in between that range in reverse order.
// Input : 23 35
// Output : 35 34 33 32 31 30 29 28 27 26 25 24 23
// Input : 10 18
// Output : 18 17 16 15 14 13 12 11 10
// Input : 10 10
// Output : 10
// Input : -10 2
// Output : 2 1 0 -1 -2 -3 -4 -5 -6 -7 -8 -9 -10
// Input : 90 18
// Output : Invalid range

#include <stdio.h>
#include <stdlib.h>

///////////////////////////////////////////////////////////////
// Function Name : RangeDisplayRev
// Description   : Displays all numbers in between the range in reverse order.
// Input         : Integer start, Integer end
// Output        : None
// Author        : Ayush Anil Patil
// Date          : 04/11/2026
///////////////////////////////////////////////////////////////
void RangeDisplayRev(int iStart, int iEnd)
{
    int iCnt = 0;

    if (iStart > iEnd)
    {
        printf("Invalid range\n");
        return;
    }

    for (iCnt = iEnd; iCnt >= iStart; iCnt--)
    {
        printf("%d ", iCnt);
    }
    printf("\n");
}

///////////////////////////////////////////////////////////////
// Function Name : main
// Description   : Reads range from user, calls RangeDisplayRev, and displays numbers.
// Input         : None
// Output        : Exit status
// Author        : Ayush Anil Patil
// Date          : 04/11/2026
///////////////////////////////////////////////////////////////
int main(void)
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter starting point: ");
    scanf("%d", &iValue1);

    printf("Enter ending point: ");
    scanf("%d", &iValue2);

    RangeDisplayRev(iValue1, iValue2);

    return EXIT_SUCCESS;
}
