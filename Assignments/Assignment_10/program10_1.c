// Assignment 10, Problem 1
// Write a program which accept radius of circle from user and calculate its area.
// Consider value of PI as 3.14. (Area = PI * Radius * Radius)
// Input : 5.3
// Output : 88.2026
// Input : 10.4
// Output : 339.6224

#include <stdio.h>
#include <stdlib.h>

///////////////////////////////////////////////////////////////
// Function Name : CircleArea
// Description   : Calculates the area of a circle for a given radius.
// Input         : Float radius
// Output        : Double area
// Author        : Ayush Anil Patil
// Date          : 31/10/2026
///////////////////////////////////////////////////////////////
double CircleArea(float fRadius)
{
    double dArea = 0.0;

    dArea = (3.14 * fRadius * fRadius);

    return dArea;
}

///////////////////////////////////////////////////////////////
// Function Name : main
// Description   : Reads radius, calls CircleArea, and displays the result.
// Input         : None
// Output        : Exit status
// Author        : Ayush Anil Patil
// Date          : 31/10/2026
///////////////////////////////////////////////////////////////
int main(void)
{
    float fValue = 0.0f;
    double dRet = 0.0;

    printf("Enter radius: ");
    scanf("%f", &fValue);

    dRet = CircleArea(fValue);

    printf("The area of circle is: %.4lf\n", dRet);

    return EXIT_SUCCESS;
}
