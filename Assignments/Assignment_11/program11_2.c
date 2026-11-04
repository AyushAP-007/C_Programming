// Assignment 11, Problem 2
// Write a program which accept range from user and display all even numbers in between that range.
// Input : 23 35
// Output : 24 26 28 30 32 34
// Input : 10 18
// Output : 10 12 14 16 18
// Input : 10 10
// Output : 10
// Input : -10 2
// Output : -10 -8 -6 -4 -2 0 2
// Input : 90 18
// Output : Invalid range

#include <stdio.h>
#include <stdlib.h>

///////////////////////////////////////////////////////////////
// Function Name : RangeDisplayEven
// Description   : Displays all even numbers in between the given range.
// Input         : Integer start, Integer end
// Output        : None
// Author        : Ayush Anil Patil
// Date          : 04/11/2026
///////////////////////////////////////////////////////////////
void RangeDisplayEven(int iStart, int iEnd)
{
    int iCnt = 0;

    if (iStart > iEnd)
    {
        printf("Invalid range\n");
        return;
    }

    for (iCnt = iStart; iCnt <= iEnd; iCnt++)
    {
        if (iCnt % 2 == 0)
        {
            printf("%d ", iCnt);
        }
    }
    printf("\n");
}

///////////////////////////////////////////////////////////////
// Function Name : main
// Description   : Reads range from user, calls RangeDisplayEven, and displays numbers.
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

    RangeDisplayEven(iValue1, iValue2);

    return EXIT_SUCCESS;
}
