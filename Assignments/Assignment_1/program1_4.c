// Accept one number and check whether it is divisible by 5.
#include <stdio.h>
#include <stdlib.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0

///////////////////////////////////////////////////////////////
// Function Name : Check_divisiblity
// Description   : Checks whether a number is divisible by 5.
// Input         : Integer
// Output        : TRUE if divisible by 5; otherwise FALSE
// Author        : Ayush Anil Patil
// Date          : 19/10/2026
///////////////////////////////////////////////////////////////
BOOL Check_divisiblity(int iNo)
{
    if ((iNo % 5) == 0)
    {
        return TRUE;
    }

    return FALSE;
}

///////////////////////////////////////////////////////////////
// Function Name : main
// Description   : Reads a number and reports its divisibility by 5.
// Input         : Integer entered by the user
// Output        : Divisibility result
// Author        : Ayush Anil Patil
// Date          : 19/10/2026
///////////////////////////////////////////////////////////////
int main(void)
{
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter number: ");
    scanf("%d", &iValue);

    bRet = Check_divisiblity(iValue);

    if (bRet == TRUE)
    {
        printf("The number %d is divisible by 5", iValue);
    }
    else
    {
        printf("The number %d is not divisible by 5", iValue);
    }

    return EXIT_SUCCESS;
}
