// Assignment 24, Problem 5: Write a program which accept string from user reverse that string in place.
// Input : "abcd" -> "dcba"; "abba" -> "abba"

#include<stdio.h>

void StrRevX(char *str)
{
    char *start = str;
    char *end = str;

    while(*end != '\0')
    {
        end++;
    }
    end--; 

    while(start < end)
    {
        char temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }
}

int main()
{
    char arr[20] = {'\0'};

    printf("Enter string");
    scanf("%[^'\n']s",arr);
    
    StrRevX(arr);
    
    printf("Modified string is %s",arr);
    
    return 0;
}