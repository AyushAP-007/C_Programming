// General instructions from the assignment:
// Complete the code snippets; they contain only service provider functions.
// Write an entry point function to call the helper functions separately.
// Create a separate Visual Studio project for each problem statement.

// Assignment 5, Problem 3
// Calculate Student Grade
// Accept marks out of 100; outside 0–100 is invalid.
// Grade bands: 90–100 A, 75–89 B, 60–74 C, 40–59 D, below 40 Fail.
// Expected: 85 -> Grade B; 35 -> Fail; 105 -> Invalid Marks.

#include <stdio.h>
#include <stdlib.h>

///////////////////////////////////////////////////////////////
// Function Name : DisplayGrade
// Description   : Determines and prints the grade based on marks obtained.
// Input         : Float marks
// Output        : None
// Author        : Ayush Anil Patil
// Date          : 22/10/2026
///////////////////////////////////////////////////////////////
void DisplayGrade(float fMarks)
{
    if ((fMarks < 0.0f) || (fMarks > 100.0f))
    {
        printf("Invalid marks.\n");
    }
    else if (fMarks >= 90.0f)
    {
        printf("Grade A\n");
    }
    else if (fMarks >= 75.0f)
    {
        printf("Grade B\n");
    }
    else if (fMarks >= 60.0f)
    {
        printf("Grade C\n");
    }
    else if (fMarks >= 40.0f)
    {
        printf("Grade D\n");
    }
    else
    {
        printf("Fail\n");
    }
}

///////////////////////////////////////////////////////////////
// Function Name : main
// Description   : Reads marks, calls DisplayGrade, and displays the result.
// Input         : None
// Output        : Exit status
// Author        : Ayush Anil Patil
// Date          : 22/10/2026
///////////////////////////////////////////////////////////////
int main(void)
{
    float fMarks = 0.0f;

    printf("Enter marks: ");
    scanf("%f", &fMarks);

    DisplayGrade(fMarks);

    return EXIT_SUCCESS;
}
