// Assignment 6, Problem 2
// Check Admission Eligibility
// Eligibility requires marks of at least 60 and age of at least 17.
// Negative age or marks outside 0–100 are invalid. Expected: 75 18 -> Eligible; 55 19 and 80 16 -> Not Eligible.

#include <stdio.h>
#include <stdlib.h>

///////////////////////////////////////////////////////////////
// Function Name : CheckAdmission
// Description   : Determines candidate admission eligibility based on marks and age.
// Input         : Float marks, Integer age
// Output        : None
// Author        : Ayush Anil Patil
// Date          : 22/10/2026
///////////////////////////////////////////////////////////////
void CheckAdmission(float fMarks, int iAge)
{
    if ((fMarks < 0.0f) || (fMarks > 100.0f) || (iAge < 0))
    {
        printf("Invalid input.\n");
    }
    else if ((fMarks >= 60.0f) && (iAge >= 17))
    {
        printf("You are eligible for admission.\n");
    }
    else
    {
        printf("You are not eligible for admission.\n");
    }
}

///////////////////////////////////////////////////////////////
// Function Name : main
// Description   : Reads marks and age, calls CheckAdmission, and displays the result.
// Input         : None
// Output        : Exit status
// Author        : Ayush Anil Patil
// Date          : 22/10/2026
///////////////////////////////////////////////////////////////
int main(void)
{
    float fMarks = 0.0f;
    int iAge = 0;

    printf("Enter marks and age: ");
    scanf("%f %d", &fMarks, &iAge);

    CheckAdmission(fMarks, iAge);

    return EXIT_SUCCESS;
}
