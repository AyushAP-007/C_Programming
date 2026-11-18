// Assignment 16, Problem 5
// Accept number of rows and number of columns from user and display below pattern.
// Input : iRow = 3 iCol = 4
// Output :   1 2 3 4
//            5 6 7 8
//            9 10 11 12

#include <stdio.h>
#include <stdlib.h>

///////////////////////////////////////////////////////////////
// Function Name : Pattern
// Description   : Displays continuously incrementing numbers.
// Input         : Integer iRow, Integer iCol
// Output        : None
// Author        : Ayush Anil Patil
// Date          : 18/11/2026
///////////////////////////////////////////////////////////////
void Pattern(int iRow, int iCol)
{
    int iRowCnt = 0, iColCnt = 0, iValue = 1;

    for (iRowCnt = 1; iRowCnt <= iRow; iRowCnt++)
    {
        for (iColCnt = 1; iColCnt <= iCol; iColCnt++, iValue++)
        {
            printf("%d\t", iValue);
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
