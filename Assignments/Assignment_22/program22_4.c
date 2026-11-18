// Assignment 22, Problem 4: Accept number from user and display below pattern.
// Input : 4
// Output : # 1 * # 2 * # 3 * # 4 *

#include<stdio.h>

///////////////////////////////////////////////////////////////
// Function Name : Pattern
// Description   : Displays #, each ascending number, and * in sequence.
// Input         : Integer iNo
// Output        : None
// Author        : Ayush Anil Patil
// Date          : 18/11/2026
///////////////////////////////////////////////////////////////
void Pattern(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("#\t%d\t*\t", iCnt);
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
    int iValue = 0;

    printf("Enter number of elements");
    scanf("%d",&iValue);

    Pattern(iValue);

    return 0;
}
