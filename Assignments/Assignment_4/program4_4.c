// Assignment 4, Problem 4
// Check Voting Eligibility
// A person must be at least 18 years old to vote. A negative age is invalid.
// Expected: 21 -> Eligible for Voting; 16 -> Not Eligible for Voting; -5 -> Invalid Age.

#include <stdio.h>
#include <stdlib.h>

///////////////////////////////////////////////////////////////
// Function Name : CheckVotingEligibility
// Description   : Determines whether a person is eligible to vote based on age.
// Input         : Integer age
// Output        : None
// Author        : Ayush Anil Patil
// Date          : 22/10/2026
///////////////////////////////////////////////////////////////
void CheckVotingEligibility(int iAge)
{
    if (iAge >= 18)
    {
        printf("Eligible for voting.\n");
    }
    else if ((iAge >= 0) && (iAge < 18))
    {
        printf("Not eligible for voting.\n");
    }
    else
    {
        printf("Invalid age.\n");
    }
}

///////////////////////////////////////////////////////////////
// Function Name : main
// Description   : Reads age, calls CheckVotingEligibility, and displays the result.
// Input         : None
// Output        : Exit status
// Author        : Ayush Anil Patil
// Date          : 22/10/2026
///////////////////////////////////////////////////////////////
int main(void)
{
    int iAge = 0;

    printf("Enter your age: ");
    scanf("%d", &iAge);

    CheckVotingEligibility(iAge);

    return EXIT_SUCCESS;
}
