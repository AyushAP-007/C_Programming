// Assignment 2, Problem 4: Display the first number the requested frequency of times.
// A negative frequency is treated as its magnitude, as shown by the assignment examples.

#include <stdio.h>

///////////////////////////////////////////////////////////////
// Function Name : Display
// Description   : Prints iNo iFrequency times, separated by spaces.
// Input         : Number to print and signed frequency (integers)
// Output        : None
// Author        : Ayush Anil Patil
// Date          : 20/10/2026
///////////////////////////////////////////////////////////////
void Display(int iNo, int iFrequency)
{
    int iCnt = 0;

    if (iFrequency < 0)
    {
        iFrequency = -iFrequency;
    }

    for (iCnt = 0; iCnt < iFrequency; iCnt++)
    {
        if (iCnt > 0)
        {
            printf(" ");
        }
        printf("%d", iNo);
    }
}

///////////////////////////////////////////////////////////////
// Function Name : main
// Description   : Reads a number and frequency, then calls Display.
// Input         : None
// Output        : None
// Author        : Ayush Anil Patil
// Date          : 20/10/2026
///////////////////////////////////////////////////////////////
int main(void)
{
    int iValue = 0;
    int iCount = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);
    printf("Enter frequency: ");
    scanf("%d", &iCount);
    Display(iValue, iCount);

    return 0;
}
