// Assignment 8, Problem 2
// Accept single digit number from user and print it into word.
// Input : 9
// Output : Nine
// Input : -3
// Output : Three
// Input : 12
// Output : Invalid Number

#include <stdio.h>
#include <stdlib.h>

///////////////////////////////////////////////////////////////
// Function Name : Display
// Description   : Converts a single digit number into its English word representation.
// Input         : Integer number
// Output        : None
// Author        : Ayush Anil Patil
// Date          : 31/10/2026
///////////////////////////////////////////////////////////////
void Display(int iNo)
{
    if (iNo < 0)
    {
        iNo = -iNo;
    }

    if (iNo == 0)
    {
        printf("Zero");
    }
    else if (iNo == 1)
    {
        printf("One");
    }
    else if (iNo == 2)
    {
        printf("Two");
    }
    else if (iNo == 3)
    {
        printf("Three");
    }
    else if (iNo == 4)
    {
        printf("Four");
    }
    else if (iNo == 5)
    {
        printf("Five");
    }
    else if (iNo == 6)
    {
        printf("Six");
    }
    else if (iNo == 7)
    {
        printf("Seven");
    }
    else if (iNo == 8)
    {
        printf("Eight");
    }
    else if (iNo == 9)
    {
        printf("Nine");
    }
    else
    {
        printf("Invalid Number");
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
