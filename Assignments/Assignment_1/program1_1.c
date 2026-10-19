// Program to divide two numbers.
#include <stdio.h>
#include <stdlib.h>

///////////////////////////////////////////////////////////////
// Function Name : Divide
// Description   : Divides the first number by the second.
// Input         : Two integers
// Output        : Integer quotient, or -1 when the divisor is zero
// Author        : Ayush
// Date          : 19/10/2026
///////////////////////////////////////////////////////////////
int Divide(int iNo1, int iNo2)
{
    int iAns = 0;

    if (iNo2 == 0)
    {
        return -1;
    }

    iAns = iNo1 / iNo2;

    return iAns;
}

///////////////////////////////////////////////////////////////
// Function Name : main
// Description   : Calls Divide and displays the result.
// Input         : None
// Output        : Division result
// Author        : Ayush
// Date          : 19/10/2026
///////////////////////////////////////////////////////////////
int main(void)
{
    int iValue1 = 15, iValue2 = 5;
    int iRet = 0;

    iRet = Divide(iValue1, iValue2);
    printf("Division is: %d", iRet);

    return EXIT_SUCCESS;
}