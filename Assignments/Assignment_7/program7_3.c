// Assignment 7, Problem 3
// Write a program which accept number from user and print its numbers line.
// Input : 4
// Output : -4 -3 -2 -1 0 1 2 3 4

#include <stdio.h>
#include <stdlib.h>

///////////////////////////////////////////////////////////////
// Function Name : Display
// Description   : Prints the number line from -iNo to +iNo.
// Input         : Integer number
// Output        : None
// Author        : Ayush Anil Patil
// Date          : 31/10/2026
///////////////////////////////////////////////////////////////
void Display(int iNo)
{
    int iCnt = 0;

    for (iCnt = -iNo; iCnt <= iNo; iCnt++)
    {
        printf("%d ", iCnt);
    }
}

///////////////////////////////////////////////////////////////
// Function Name : main
// Description   : Reads input, calls Display, and displays the result.
// Input         : None
// Output        : Exit status
// Author        : Ayush Anil Patil
// Date          : 31/10/2026
///////////////////////////////////////////////////////////////
int main(void)
{
    int iValue = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    Display(iValue);

    return EXIT_SUCCESS;
}
