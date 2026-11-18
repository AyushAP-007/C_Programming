// Assignment 16, Problem 4
// Accept number of rows and number of columns from user and display below pattern.
// Input : iRow = 4 iCol = 5
// Output :   4 4 4 4 4
//            3 3 3 3 3
//            2 2 2 2 2
//            1 1 1 1 1

#include <stdio.h>
#include <stdlib.h>

///////////////////////////////////////////////////////////////
// Function Name : Pattern
// Description   : Displays row numbers in descending order.
// Input         : Integer iRow, Integer iCol
// Output        : None
// Author        : Ayush Anil Patil
// Date          : 18/11/2026
///////////////////////////////////////////////////////////////
void Pattern(int iRow, int iCol)
{
    int iRowCnt = 0, iColCnt = 0;

    for (iRowCnt = iRow; iRowCnt >= 1; iRowCnt--)
    {
        for (iColCnt = 1; iColCnt <= iCol; iColCnt++)
        {
            printf("%d\t", iRowCnt);
        }
        printf("\n");
    }
}

///////////////////////////////////////////////////////////////
// Function Name : main
// Description   : Reads row and column counts, calls Pattern.
// Input         : None
// Output        : Exit status
// Author        : Ayush Anil Patil
// Date          : 18/11/2026
///////////////////////////////////////////////////////////////
int main(void)
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &iValue1, &iValue2);

    Pattern(iValue1, iValue2);

    return EXIT_SUCCESS;
}
