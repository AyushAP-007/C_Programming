// Assignment 21, Problem 5: Accept number of rows and number of columns from user and display below pattern.
// Input : iRow = 4 iCol = 4
// Output :   1 1 1 1
//            2 2 2 2
//            3 3 3 3
//            4 4 4 4
#include<stdio.h>

///////////////////////////////////////////////////////////////
// Function Name : Pattern
// Description   : Displays the row number across each row.
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
            printf("%d\t", iRowCnt);
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
