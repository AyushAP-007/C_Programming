// Assignment 6, Problem 3
// Calculate Shopping Discount
// Negative purchase amount is invalid. Below ₹1000: 0%; ₹1000 to below ₹5000: 10%; ₹5000 and above: 20%.
// Expected: 800 -> 800.00; 2000 -> 1800.00; 6000 -> 4800.00.

#include <stdio.h>
#include <stdlib.h>

///////////////////////////////////////////////////////////////
// Function Name : CalculateDiscount
// Description   : Calculates the discounted final payable amount based on purchase total.
// Input         : Float amount
// Output        : None
// Author        : Ayush Anil Patil
// Date          : 22/10/2026
///////////////////////////////////////////////////////////////
void CalculateDiscount(float fAmount)
{
    float fDiscount = 0.0f;
    float fFinalAmount = 0.0f;

    if (fAmount < 0.0f)
    {
        printf("Negative purchase amounts are invalid.\n");
    }
    else if (fAmount < 1000.0f)
    {
        fFinalAmount = fAmount;
        
        printf("Payable amount is %.2f\n", fFinalAmount);
    }
    else if (fAmount < 5000.0f)
    {
        fDiscount = fAmount * 0.10f;
        fFinalAmount = fAmount - fDiscount;
        
        printf("Payable amount is %.2f\n", fFinalAmount);
    }
    else
    {
        fDiscount = fAmount * 0.20f;
        fFinalAmount = fAmount - fDiscount;
        
        printf("Payable amount is %.2f\n", fFinalAmount);
    }
}

///////////////////////////////////////////////////////////////
// Function Name : main
// Description   : Reads purchase amount, calls CalculateDiscount, and displays the result.
// Input         : None
// Output        : Exit status
// Author        : Ayush Anil Patil
// Date          : 22/10/2026
///////////////////////////////////////////////////////////////
int main(void)
{
    float fAmount = 0.0f;

    printf("Enter purchase amount: ");
    scanf("%f", &fAmount);

    CalculateDiscount(fAmount);

    return EXIT_SUCCESS;
}
