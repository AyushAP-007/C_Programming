// Assignment 9, Problem 5: Write a program which returns difference between Even factorial and odd factorial of given number.
// Input : 5
// Output : -7 (8 - 15)
// Input : -5
// Output : -7 (8 - 15)
// Input : 10
// Output : 2895 (3840 - 945)

#include<stdio.h>

int FactorialDiff(int iNo)
{
    int iCnt = 0, iEvenFact = 0, iOddFact = 0, iFactDiff = 0;

    iEvenFact = 1, iOddFact = 1;

    if (iNo < 0)
    {
        iNo = -iNo;
    }

    for (iCnt = iNo; iCnt >= 1; iCnt--)
    {
        if ((iCnt % 2) == 0)
        {
            iEvenFact = (iEvenFact * iCnt);
        }
        else
        {
            iOddFact = (iOddFact * iCnt);
        }
    }

    iFactDiff = (iEvenFact - iOddFact);

    return iFactDiff;
}

int main()
{
    int iValue = 0,iRet = 0;

    printf("Enter number: ");
    scanf("%d",&iValue);

    iRet = FactorialDiff(iValue);

    printf("Factorial difference is %d",iRet);

    return 0;
}
