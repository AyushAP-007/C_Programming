// Assignment 26, Problem 1: Write a program which displays ASCII table. Table contains symbol, Decimal, Hexadecimal and Octal representation of every member from 0 to 255.

#include<stdio.h>

///////////////////////////////////////////////////////////////
// Function Name : DisplayASCII
// Description   : Displays ASCII symbols and their decimal, hexadecimal, and octal values.
// Input         : None
// Output        : ASCII table printed to the screen
// Author        : Ayush Anil Patil
// Date          : 20/11/2026
///////////////////////////////////////////////////////////////
void DisplayASCII()
{
    int iCnt = 0;

    printf("Symbol\tDecimal\tHexadecimal\tOctal\n");
    for(iCnt = 0; iCnt <= 255; iCnt++)
    {
        printf("%c\t%d\t%x\t%o\n", iCnt, iCnt, iCnt, iCnt);
    }
}

///////////////////////////////////////////////////////////////
// Function Name : main
// Description   : Calls DisplayASCII to display the ASCII table.
// Input         : None
// Output        : Exit status
// Author        : Ayush Anil Patil
// Date          : 20/11/2026
///////////////////////////////////////////////////////////////
int main()
{
    DisplayASCII();
    return 0;
}