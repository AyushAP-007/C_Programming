// Assignment 27, Problem 4: Write a program which accept string from user and check whether it contains vowels in it or not.
// marvellous -> TRUE; Demo -> TRUE; xyz -> FALSE

#include<stdio.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

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