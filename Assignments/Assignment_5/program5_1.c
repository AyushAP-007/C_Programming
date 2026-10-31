// Assignment 5, Problem 1
// Find the Greatest of Three Numbers
// Accept three integers and determine the greatest, including when values are equal.
// Expected: 10 50 30 -> 50 is Greatest; 40 40 20 -> 40 is Greatest; 15 15 15 -> 15 is Greatest.

#include <stdio.h>
#include <stdlib.h>

///////////////////////////////////////////////////////////////
// Function Name : FindGreatest
// Description   : Determines the greatest among three integers.
// Input         : Three integers (iFirst, iSecond, iThird)
// Output        : None
// Author        : Ayush Anil Patil
// Date          : 22/10/2026
///////////////////////////////////////////////////////////////
void FindGreatest(int iFirst, int iSecond, int iThird)
{
    if ((iFirst >= iSecond) && (iFirst >= iThird))
    {
        printf("%d is greatest.\n", iFirst);
    }
    else if (iSecond >= iThird)
    {
        printf("%d is greatest.\n", iSecond);
    }
    else
    {
        printf("%d is greatest.\n", iThird);
    }
}

///////////////////////////////////////////////////////////////
// Function Name : main
// Description   : Reads three integers, calls FindGreatest, and displays the result.
// Input         : None
// Output        : Exit status
// Author        : Ayush Anil Patil
// Date          : 22/10/2026
///////////////////////////////////////////////////////////////
int main(void)
{
    int iValue1 = 0;
    int iValue2 = 0;
    int iValue3 = 0;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &iValue1, &iValue2, &iValue3);

    FindGreatest(iValue1, iValue2, iValue3);

    return EXIT_SUCCESS;
}
