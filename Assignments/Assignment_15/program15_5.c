// Assignment 15, Problem 5
// Write a program which accept total marks & obtained marks from user and calculate percentage.
// Input : 1000 745
// Output : 74.5%

#include <stdio.h>
#include <stdlib.h>

///////////////////////////////////////////////////////////////
// Function Name : Percentage
// Description   : Calculates percentage from obtained marks and total marks.
// Input         : Integer total marks, Integer obtained marks
// Output        : Float percentage or -1.0 on invalid marks
// Author        : Ayush Anil Patil
// Date          : 04/11/2026
///////////////////////////////////////////////////////////////
float Percentage(int iTotal, int iObtained)
{
    float fPer = 0.0f;

    if ((iTotal <= 0) || (iObtained < 0) || (iObtained > iTotal))
    {
        return -1.0f;
    }

    fPer = ((float)iObtained / (float)iTotal) * 100.0f;

    return fPer;
}

///////////////////////////////////////////////////////////////
// Function Name : main
// Description   : Reads total and obtained marks, calls Percentage, and displays result.
// Input         : None
// Output        : Exit status
// Author        : Ayush Anil Patil
// Date          : 04/11/2026
///////////////////////////////////////////////////////////////
int main(void)
{
    int iValue1 = 0, iValue2 = 0;
    float fRet = 0.0f;

    printf("Please enter total marks: ");
    scanf("%d", &iValue1);

    printf("Please enter obtained marks: ");
    scanf("%d", &iValue2);

    fRet = Percentage(iValue1, iValue2);

    if (fRet < 0.0f)
    {
        printf("Invalid marks\n");
    }
    else
    {
        printf("Percentage is: %.1f %%\n", fRet);
    }

    return EXIT_SUCCESS;
}
