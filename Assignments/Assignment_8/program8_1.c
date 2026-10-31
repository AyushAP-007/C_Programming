// Assignment 8, Problem 1
// Write a program which accept number from user and if number is less than 50 then print small,
// if it is greater than 50 and less than 100 then print medium, if it is greater than 100 then print large.
// Input : 75
// Output : Medium

#include <stdio.h>
#include <stdlib.h>

///////////////////////////////////////////////////////////////
// Function Name : Number
// Description   : Categorizes a number as Small (<50), Medium (50-99), or Large (>=100).
// Input         : Integer number
// Output        : None
// Author        : Ayush Anil Patil
// Date          : 31/10/2026
///////////////////////////////////////////////////////////////
void Number(int iNo)
{
    if (iNo < 50)
    {
        printf("Small");
    }
    else if ((iNo >= 50) && (iNo < 100))
    {
        printf("Medium");
    }
    else
    {
        printf("Large");
    }
}

///////////////////////////////////////////////////////////////
// Function Name : main
// Description   : Reads input, calls Number, and displays the result.
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

    Number(iValue);

    return EXIT_SUCCESS;
}
