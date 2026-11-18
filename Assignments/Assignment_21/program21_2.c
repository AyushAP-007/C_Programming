// Assignment 21, Problem 2: Accept number of rows and number of columns from user and display below pattern.
// Input : iRow = 4 iCol = 3
// Output :   1 2 3
//            1 2 3
//            1 2 3
//            1 2 3

#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int iRowCnt = 0, iColCnt = 0;

    for(iRowCnt = 1; iRowCnt <= iRow; iRowCnt++)
    {
        for(iColCnt = 1; iColCnt <= iCol; iColCnt++)
        {
            printf("%d\t", iColCnt);
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
