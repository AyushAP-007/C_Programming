// Assignment 16, Problem 1
// Accept number of rows and number of columns from user and display below pattern.
// Input : iRow = 4 iCol = 4
// Output :   A B C D
//            A B C D
//            A B C D
//            A B C D

#include <stdio.h>
#include <stdlib.h>

///////////////////////////////////////////////////////////////
// Function Name : Pattern
// Description   : Displays alphabetical character matrix.
// Input         : Integer iRow, Integer iCol
// Output        : None
// Author        : Ayush Anil Patil
// Date          : 18/11/2026
///////////////////////////////////////////////////////////////
void Pattern(int iRow, int iCol)
{
    int iRowCnt = 0, iColCnt = 0;
    char cValue = '\0';

    for (iRowCnt = 1; iRowCnt <= iRow; iRowCnt++)
    {
        for (iColCnt = 1, cValue = 'A'; iColCnt <= iCol; iColCnt++, cValue++)
        {
            printf("%c\t", cValue);
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
