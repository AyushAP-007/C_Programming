// Assignment 10, Problem 2
// Write a program which accept width & height of rectangle from user and calculate its area. (Area = Width * Height)
// Input : 5.3 9.78
// Output : 51.834

#include <stdio.h>
#include <stdlib.h>

///////////////////////////////////////////////////////////////
// Function Name : RectArea
// Description   : Calculates the area of a rectangle.
// Input         : Float width, Float height
// Output        : Double area
// Author        : Ayush Anil Patil
// Date          : 31/10/2026
///////////////////////////////////////////////////////////////
double RectArea(float fWidth, float fHeight)
{
    double dArea = 0.0;

    dArea = (fWidth * fHeight);

    return dArea;
}

///////////////////////////////////////////////////////////////
// Function Name : main
// Description   : Reads width and height, calls RectArea, and displays the result.
// Input         : None
// Output        : Exit status
// Author        : Ayush Anil Patil
// Date          : 31/10/2026
///////////////////////////////////////////////////////////////
int main(void)
{
    float fValue1 = 0.0f, fValue2 = 0.0f;
    double dRet = 0.0;

    printf("Enter width: ");
    scanf("%f", &fValue1);

    printf("Enter height: ");
    scanf("%f", &fValue2);

    dRet = RectArea(fValue1, fValue2);

    printf("The area of rectangle is: %.3lf\n", dRet);

    return EXIT_SUCCESS;
}
