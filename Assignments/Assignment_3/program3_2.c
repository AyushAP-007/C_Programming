// General instructions from the assignment:
// Complete the code snippets; they contain only service provider functions.
// Write an entry point function to call the helper functions separately.
// Create a separate Visual Studio project for each problem statement.
// Assignment 3, Problem 2
// Prompt: Accept a number and print its even factors.
// Sample shown: Input 24 -> 1 2 4 6 8 12
// Note: The sample includes 1 although the prompt says "even factors".

#include <stdio.h>

///////////////////////////////////////////////////////////////
// Function Name : DisplayFactor
// Description   : Displays the factors of the input number.
// Input         : Integer number
// Output        : None
// Author        : Ayush Anil Patil
// Date          : 20/10/2026
///////////////////////////////////////////////////////////////
void DisplayFactor(int iNo)
{
    int i = 0;
    if (iNo <= 0)
    {
        iNo = -iNo;
    }
    for (i = 1; i <= iNo; i++)
    {
        if (iNo % i == 0)
        {
            printf("%d \n", i);
        }
    }
}

///////////////////////////////////////////////////////////////
// Function Name : main
// Description   : Reads input, calls the problem function, and displays the result.
// Input         : None
// Output        : Integer status code
// Author        : Ayush Anil Patil
// Date          : 20/10/2026
///////////////////////////////////////////////////////////////
int main()
{
    int iValue = 0;
    
    printf("Enter number\n");
    scanf("%d", &iValue);

    DisplayFactor(iValue);
    
    return 0;
}
