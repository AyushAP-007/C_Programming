// Assignment 15, Problem 1
// Write a program which accept name from user and print that name.
// Input : Piyush Khairnar
// Output : Piyush Khairnar

#include <stdio.h>
#include <stdlib.h>

///////////////////////////////////////////////////////////////
// Function Name : main
// Description   : Accepts full name from user and prints it.
// Input         : None
// Output        : Exit status
// Author        : Ayush Anil Patil
// Date          : 04/11/2026
///////////////////////////////////////////////////////////////
int main(void)
{
    char Name[50];

    printf("Please enter full name: ");
    scanf(" %49[^\n]", Name);

    printf("Your name is %s\n", Name);

    return EXIT_SUCCESS;
}
