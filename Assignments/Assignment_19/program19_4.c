// Assignment 19, Problem 4: Accept number of rows and number of columns from user and display below pattern.
// Input : iRow = 6 iCol = 6
// Output :   * * * * * *
//            * *       *
//            *   *     *
//            *     *   *
//            *       * *
//            * * * * * *


#include<stdio.h>

///////////////////////////////////////////////////////////////
// Function Name : Pattern
// Description   : Displays the border and main diagonal using asterisks.
// Input         : Integer iRow, Integer iCol
// Output        : None
// Author        : Ayush Anil Patil
// Date          : 18/11/2026
///////////////////////////////////////////////////////////////
void Pattern(int iRow, int iCol)
{
    int iRowCnt = 0, iColCnt = 0;

    for(iRowCnt = 1; iRowCnt <= iRow; iRowCnt++)
    {
        for(iColCnt = 1; iColCnt <= iCol; iColCnt++)
        {
            if(iRowCnt == 1 || iRowCnt == iRow || iColCnt == 1 || iColCnt == iCol || iRowCnt == iColCnt)
            {
                printf("*\t");
            }
            else
            {
                printf("\t");
            }
        }
        printf("\n");
    }
}

///////////////////////////////////////////////////////////////
// Function Name : main
// Description   : Reads input values and calls Pattern.
// Input         : None
// Output        : Exit status
// Author        : Ayush Anil Patil
// Date          : 18/11/2026
///////////////////////////////////////////////////////////////
int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter number of rows and columns");
    scanf("%d %d",&iValue1, &iValue2);

    Pattern(iValue1, iValue2);

    return 0;
}
