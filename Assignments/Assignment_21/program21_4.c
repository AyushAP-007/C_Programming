// Assignment 21, Problem 4: Accept number of rows and number of columns from user and display below pattern.
// Input : iRow = 3 iCol = 4
// Output :   * # * #
//            * # * #
//            * # * #

#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int iRowCnt = 0, iColCnt = 0;

    for(iRowCnt = 1; iRowCnt <= iRow; iRowCnt++)
    {
        for(iColCnt = 1; iColCnt <= iCol; iColCnt++)
        {
            if((iColCnt % 2) == 0)
            {
                printf("#\t");
            }
            else
            {
                printf("*\t");
            }
        }
        printf("\n");
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter number of rows and columns");
    scanf("%d %d",&iValue1, &iValue2);

    Pattern(iValue1, iValue2);

    return 0;
}
