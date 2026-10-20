// General instructions from the assignment:
// Complete the code snippets; they contain only service provider functions.
// Write an entry point function to call the helper functions separately.
// Create a separate Visual Studio project for each problem statement.
// Assignment 3, Problem 1
// Prompt: Accept a number and print that number of even numbers.
// Sample: Input 7 -> 2 4 6 8 10 12 14

#include <stdio.h>

///////////////////////////////////////////////////////////////
// Function Name : PrintEven
// Description   : Prints the first iNo positive even numbers.
// Input         : Integer count
// Output        : None
// Author        : Ayush Anil Patil
// Date          : 20/10/2026
///////////////////////////////////////////////////////////////
void PrintEven(int iNo)
{
    if (iNo <= 0)
    {
        return;
    }
    
    int iCnt = 0;

    for (iCnt = 2; iCnt <= (2*iNo); iCnt += 2)
    {
        printf("%d \n", iCnt);
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
    
    PrintEven(iValue);
    
    return 0;
}

