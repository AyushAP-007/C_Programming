// Assignment 6, Problem 1
// Calculate Electricity Bill
// Apply slab rates to units within each slab; negative consumption is invalid.
// First 100 units: ₹5/unit; next 100: ₹7/unit; above 200: ₹10/unit.
// Expected: 80 -> 400.00; 150 -> 850.00; 250 -> 1700.00.

#include <stdio.h>
#include <stdlib.h>

///////////////////////////////////////////////////////////////
// Function Name : CalculateElectricityBill
// Description   : Calculates total electricity bill based on slab rates.
// Input         : Integer units consumed
// Output        : None
// Author        : Ayush Anil Patil
// Date          : 22/10/2026
///////////////////////////////////////////////////////////////
void CalculateElectricityBill(int iUnits)
{
    float fBill = 0.0f;

    if (iUnits < 0)
    {
        printf("Negative unit consumption is invalid.\n");
    }
    else
    {
        if (iUnits <= 100)
        {
            fBill = iUnits * 5.0f;
        }
        else if (iUnits <= 200)
        {
            fBill = (100 * 5.0f) + ((iUnits - 100) * 7.0f);
        }
        else
        {
            fBill = (100 * 5.0f) + (100 * 7.0f) + ((iUnits - 200) * 10.0f);
        }

        printf("Your electricity bill is: %.2f\n", fBill);
    }
}

///////////////////////////////////////////////////////////////
// Function Name : main
// Description   : Reads consumed units, calls CalculateElectricityBill, and displays the result.
// Input         : None
// Output        : Exit status
// Author        : Ayush Anil Patil
// Date          : 22/10/2026
///////////////////////////////////////////////////////////////
int main(void)
{
    int iUnits = 0;

    printf("Enter consumed units: ");
    scanf("%d", &iUnits);

    CalculateElectricityBill(iUnits);

    return EXIT_SUCCESS;
}
