// Assignment 5, Problem 2
// Check Leap Year
// Use Gregorian rules: divisible by 400, or divisible by 4 but not by 100.
// Years less than or equal to zero are invalid. Expected: 2024 -> Leap Year; 1900 -> Not a Leap Year; 2000 -> Leap Year.

#include <stdio.h>
#include <stdlib.h>

///////////////////////////////////////////////////////////////
// Function Name : CheckLeapYear
// Description   : Determines whether a given year is a leap year.
// Input         : Integer year
// Output        : None
// Author        : Ayush Anil Patil
// Date          : 22/10/2026
///////////////////////////////////////////////////////////////
void CheckLeapYear(int iYear)
{
    if (iYear <= 0)
    {
        printf("Invalid year.\n");
    }
    else if (((iYear % 400) == 0) || (((iYear % 4) == 0) && ((iYear % 100) != 0)))
    {
        printf("The year is a leap year.\n");
    }
    else
    {
        printf("The year is not a leap year.\n");
    }
}

///////////////////////////////////////////////////////////////
// Function Name : main
// Description   : Reads year, calls CheckLeapYear, and displays the result.
// Input         : None
// Output        : Exit status
// Author        : Ayush Anil Patil
// Date          : 22/10/2026
///////////////////////////////////////////////////////////////
int main(void)
{
    int iYear = 0;

    printf("Enter year: ");
    scanf("%d", &iYear);

    CheckLeapYear(iYear);

    return EXIT_SUCCESS;
}
