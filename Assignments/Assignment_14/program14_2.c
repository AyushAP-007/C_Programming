// Assignment 14, Problem 2
// Write a program which accept number from user and display its factors in decreasing order.
// Input : 12
// Output : 6 4 3 2 1
// Input : 13
// Output : 1
// Input : 10
// Output : 5 2 1

#include <stdio.h>
#include <stdlib.h>

///////////////////////////////////////////////////////////////
// Function Name : FactRev
// Description   : Displays factors of a number in decreasing order.
// Input         : Integer number
// Output        : None
// Author        : Ayush Anil Patil
// Date          : 04/11/2026
///////////////////////////////////////////////////////////////
void FactRev(int iNo)
{
    int iCnt = 0;

    if (iNo == 1)
    {
        printf("1\n");
        return;
    }

    for (iCnt = (iNo / 2); iCnt >= 1; iCnt--)
    {
        if ((iNo % iCnt) == 0)
        {
            printf("%d ", iCnt);
        }
    }
    printf("\n");
}

///////////////////////////////////////////////////////////////
// Function Name : main
// Description   : Reads number, calls FactRev, and displays factors.
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

    FactRev(iValue);

    return EXIT_SUCCESS;
}
