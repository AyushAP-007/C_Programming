// Assignment 6, Problem 4
// Check Triangle Validity
// Accept three integer side lengths. All must be positive, and the sum of every pair
// must be greater than the remaining side.
// Expected: 3 4 5 -> Valid Triangle; 1 2 3 -> Invalid Triangle; 10 2 3 -> Invalid Triangle.

#include <stdio.h>
#include <stdlib.h>

///////////////////////////////////////////////////////////////
// Function Name : CheckTriangle
// Description   : Validates whether three side lengths can form a valid triangle.
// Input         : Three integers (iSide1, iSide2, iSide3)
// Output        : None
// Author        : Ayush Anil Patil
// Date          : 22/10/2026
///////////////////////////////////////////////////////////////
void CheckTriangle(int iSide1, int iSide2, int iSide3)
{
    if ((iSide1 > 0) && (iSide2 > 0) && (iSide3 > 0))
    {
        if (((long long)iSide1 + iSide2 > iSide3) &&
            ((long long)iSide2 + iSide3 > iSide1) &&
            ((long long)iSide1 + iSide3 > iSide2))
        {
            printf("Triangle is valid.\n");
        }
        else
        {
            printf("Triangle is invalid.\n");
        }
    }
    else
    {
        printf("Sides are not positive. Enter valid sides.\n");
    }
}

///////////////////////////////////////////////////////////////
// Function Name : main
// Description   : Reads three sides, calls CheckTriangle, and displays the result.
// Input         : None
// Output        : Exit status
// Author        : Ayush Anil Patil
// Date          : 22/10/2026
///////////////////////////////////////////////////////////////
int main(void)
{
    int iSide1 = 0, iSide2 = 0, iSide3 = 0;

    printf("Enter three sides: ");
    scanf("%d %d %d", &iSide1, &iSide2, &iSide3);

    CheckTriangle(iSide1, iSide2, iSide3);

    return EXIT_SUCCESS;
}
