// Accept one number and print that many asterisks.
#include <stdio.h>
#include <stdlib.h>

///////////////////////////////////////////////////////////////
// Function Name : accept
// Description   : Prints one asterisk for each count up to iNo.
// Input         : Integer count
// Output        : iNo asterisks
// Author        : Ayush Anil Patil
// Date          : 19/10/2026
///////////////////////////////////////////////////////////////
void accept(int iNo)
{
    int iCnt = 0;

    for (iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("*");
    }
}

///////////////////////////////////////////////////////////////
// Function Name : main
// Description   : Reads a count and prints that many asterisks.
// Input         : Integer entered by the user
// Output        : Asterisks
// Author        : Ayush Anil Patil
// Date          : 19/10/2026
///////////////////////////////////////////////////////////////
int main(void)
{
    int iValue = 0;

    printf("Enter the number: ");
    scanf("%d", &iValue);

    accept(iValue);
    return EXIT_SUCCESS;
}
