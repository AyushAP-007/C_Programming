// Program to print numbers from 5 to 1.
#include <stdio.h>
#include <stdlib.h>

///////////////////////////////////////////////////////////////
// Function Name : display
// Description   : Prints the numbers from 5 down to 1.
// Input         : None
// Output        : Numbers 5, 4, 3, 2, 1
// Author        : Ayush Anil Patil
// Date          : 19/10/2026
///////////////////////////////////////////////////////////////
void display(void)
{
    int i = 5;

    while (i >= 1)
    {
        printf("%d", i);
        i--;
    }
}

///////////////////////////////////////////////////////////////
// Function Name : main
// Description   : Calls display.
// Input         : None
// Output        : Numbers 5, 4, 3, 2, 1
// Author        : Ayush Anil Patil
// Date          : 19/10/2026
///////////////////////////////////////////////////////////////
int main(void)
{
    display();
    return EXIT_SUCCESS;
}
