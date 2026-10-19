// Program to print "Marvellous" five times.
#include <stdio.h>
#include <stdlib.h>

///////////////////////////////////////////////////////////////
// Function Name : display
// Description   : Prints "Marvellous" five times.
// Input         : None
// Output        : "Marvellous" five times
// Author        : Ayush
// Date          : 19/10/2026
///////////////////////////////////////////////////////////////
void display(void)
{
    int i = 0;

    for (i = 1; i <= 5; i++)
    {
        printf("Marvellous");
    }
}

///////////////////////////////////////////////////////////////
// Function Name : main
// Description   : Calls display.
// Input         : None
// Output        : "Marvellous" five times
// Author        : Ayush
// Date          : 19/10/2026
///////////////////////////////////////////////////////////////
int main(void)
{
    display();
    return EXIT_SUCCESS;
}