// Assignment 17, Problem 4
// Accept number of rows and number of columns from user and display below pattern.
// Input : iRow = 5 iCol = 5
// Output :   1 2 3 4 5
//            -1 -2 -3 -4 -5
//            1 2 3 4 5
//            -1 -2 -3 -4 -5
//            1 2 3 4 5

#include <stdio.h>
#include <stdlib.h>

///////////////////////////////////////////////////////////////
// Function Name : Pattern
// Description   : Displays positive numbers on odd rows and negative numbers on even rows.
// Input         : Integer iRow, Integer iCol
// Output        : None
// Author        : Ayush Anil Patil
// Date          : 18/11/2026
///////////////////////////////////////////////////////////////
void Pattern(int iRow, int iCol)
{
    int iRowCnt = 0, iColCnt = 0, iValue = 0;

    for (iRowCnt = 1; iRowCnt <= iRow; iRowCnt++)
    {
        for (iColCnt = 1, iValue = 1; iColCnt <= iCol; iColCnt++)
        {
            if (iRowCnt % 2 == 0)
            {
                printf("%d\t", -iValue);
                iValue++;
            }
            else
            {
                printf("%d\t", iValue);
                iValue++;
            }
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
