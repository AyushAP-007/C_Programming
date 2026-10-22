// General instructions from the assignment:
// Complete the code snippets; they contain only service provider functions.
// Write an entry point function to call the helper functions separately.
// Create a separate Visual Studio project for each problem statement.

// Assignment 6, Problem 5
// Calculate Employee Bonus
// Accept an employee's monthly salary and completed years of service. Calculate the bonus:
// more than 10 years of service earns 15% of monthly salary; 5 to 10 years earns 10%;
// less than 5 years earns 5%. Salary must be positive and years of service cannot be negative.
// Expected: 30000 12 -> 4500.00; 20000 7 -> 2000.00; 10000 2 -> 500.00.

#include <stdio.h>
#include <stdlib.h>

///////////////////////////////////////////////////////////////
// Function Name : CalculateBonus
// Description   : Calculates the employee bonus based on salary and years of service.
// Input         : Float salary, Integer years of service
// Output        : None
// Author        : Ayush Anil Patil
// Date          : 22/10/2026
///////////////////////////////////////////////////////////////
void CalculateBonus(float fSalary, int iYears)
{
    float fBonus = 0.0f;

    if ((fSalary > 0.0f) && (iYears >= 0))
    {
        if (iYears > 10)
        {
            fBonus = fSalary * 0.15f;
        }
        else if ((iYears >= 5) && (iYears <= 10))
        {
            fBonus = fSalary * 0.10f;
        }
        else
        {
            fBonus = fSalary * 0.05f;
        }

        printf("The bonus the employee will get is: %.2f\n", fBonus);
    }
    else
    {
        printf("Invalid salary or years of service.\n");
    }
}

///////////////////////////////////////////////////////////////
// Function Name : main
// Description   : Reads salary and years of service, calls CalculateBonus, and displays the result.
// Input         : None
// Output        : Exit status
// Author        : Ayush Anil Patil
// Date          : 22/10/2026
///////////////////////////////////////////////////////////////
int main(void)
{
    float fSalary = 0.0f;
    int iYears = 0;

    printf("Enter salary and years of service: ");
    scanf("%f %d", &fSalary, &iYears);

    CalculateBonus(fSalary, iYears);

    return EXIT_SUCCESS;
}
