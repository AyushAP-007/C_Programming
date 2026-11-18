// Assignment 20, Problem 5: Accept number of rows and number of columns from user and display below pattern.
// Input : iRow = 4 iCol = 4
// Output :   1 2 3 4 5
//            1 2     5
//            1   3   5
//            1     4 5
//            1 2 3 4 5

#include<stdio.h>

///////////////////////////////////////////////////////////////
// Function Name : Pattern
// Description   : Displays the border and main diagonal using column numbers.
// Input         : Integer iRow, Integer iCol
// Output        : None
// Author        : Ayush Anil Patil
// Date          : 18/11/2026
///////////////////////////////////////////////////////////////
void Pattern(int iRow, int iCol)
{
    int iRowCnt = 0, iColCnt = 0;

    for (iRowCnt = 1; iRowCnt <= iRow + 1; iRowCnt++)
    {
        for (iColCnt = 1; iColCnt <= iCol + 1; iColCnt++)
        {
            if (iRowCnt == 1 || iRowCnt == iRow + 1 || iColCnt == 1 || iColCnt == iCol + 1 || iRowCnt == iColCnt)
            {
                printf("%d\t", iColCnt);
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

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &iValue1, &iValue2);

    Pattern(iValue1, iValue2);

    return 0;
}
