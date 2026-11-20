// Assignment 24, Problem 4: Write a program which accept string from user and accept one character. Return index of last occurrence of that character.
// Input : "Marvellous Multi OS", M -> 11; W -> -1; e -> 4

#include<stdio.h>

int LastChar(char *str, char ch)
{
    int iCnt = 0;
    int iLastIndex = 0;
    iLastIndex = -1;

    while(*str != '\0')
    {
        if(*str == ch)
        {
            iLastIndex = iCnt;
        }
        iCnt++;
        str++;
    }

    return iLastIndex;
}

int main()
{
    char arr[20] = {'\0'};
    char cValue = '\0';
    int iRet = 0;
    
    printf("Enter string");
    scanf("%[^'\n']s",arr);
    
    printf("Enter the character");
    scanf(" %c",&cValue);
    
    iRet = LastChar(arr, cValue);
    
    printf("Character location is %d",iRet);
    
    return 0;
}