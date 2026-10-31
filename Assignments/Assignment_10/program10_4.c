// Assignment 10, Problem 4
// Write a program which accept temperature in Fahrenheit and convert it into celsius. (1 celsius = (Fahrenheit -32) * (5/9))
// Input : 10
// Output : -12.2222 (10 - 32) * (5/9)
// Input : 34
// Output : 1.11111 (34 - 32) * (5/9)

#include <stdio.h>
#include <stdlib.h>

///////////////////////////////////////////////////////////////
// Function Name : FhtoCs
// Description   : Converts temperature from Fahrenheit to Celsius.
// Input         : Float temperature in Fahrenheit
// Output        : Double temperature in Celsius
// Author        : Ayush Anil Patil
// Date          : 31/10/2026
///////////////////////////////////////////////////////////////
double FhtoCs(float fTemp)
{
    double dTemp = 0.0;

    dTemp = ((fTemp - 32.0) * 5.0) / 9.0;

    return dTemp;
}

///////////////////////////////////////////////////////////////
// Function Name : main
// Description   : Reads temperature in Fahrenheit, calls FhtoCs, and displays the result.
// Input         : None
// Output        : Exit status
// Author        : Ayush Anil Patil
// Date          : 31/10/2026
///////////////////////////////////////////////////////////////
int main(void)
{
    float fValue = 0.0f;
    double dRet = 0.0;

    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &fValue);

    dRet = FhtoCs(fValue);

    printf("The temperature in celsius is: %.4lf\n", dRet);

    return EXIT_SUCCESS;
}
