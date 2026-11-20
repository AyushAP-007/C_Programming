// Assignment 27, Problem 4: Write a program which accept string from user and check whether it contains vowels in it or not.
// marvellous -> TRUE; Demo -> TRUE; xyz -> FALSE

#include<stdio.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

///////////////////////////////////////////////////////////////
// Function Name : ChkVowel
// Description   : Checks whether the string contains an uppercase or lowercase vowel.
// Input         : Character pointer str
// Output        : BOOL TRUE if a vowel is found, otherwise FALSE
// Author        : Ayush Anil Patil
// Date          : 20/11/2026
///////////////////////////////////////////////////////////////
BOOL ChkVowel(char *str)
{
    while(*str != '\0')
    {
        if((*str == 'A') || (*str == 'E') || (*str == 'I') || (*str == 'O') || (*str == 'U') || 
           (*str == 'a') || (*str == 'e') || (*str == 'i') || (*str == 'o') || (*str == 'u'))
        {
            break;
        }
        str++;
    }

    if(*str == '\0')
    {
        return FALSE;
    }
    else
    {
        return TRUE;
    }
}


///////////////////////////////////////////////////////////////
// Function Name : main
// Description   : Reads a string, checks whether it contains a vowel, and displays the result.
// Input         : None
// Output        : Exit status
// Author        : Ayush Anil Patil
// Date          : 20/11/2026
///////////////////////////////////////////////////////////////
int main()
{
    char arr[20];
    BOOL bRet = FALSE;

    printf("Enter string");
    scanf("%[^'\n']s",arr);
    
    bRet = ChkVowel(arr);
    
    if(bRet == TRUE)
    {
        printf("Contains Vowel");
    }
    else
    {
        printf("There is no Vowel");
    }
    
    return 0;
}