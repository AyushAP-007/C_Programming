// Assignment 27, Problem 5: 3. Write a program which accept string from user and display it inn reverse order.
// Input : "MarvellouS" -> "SuollevraM"

#include<stdio.h>

void Reverse(char *str)
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

    printf("Modified string is %s",str);
}

int main()
{
    char arr[20];

    printf("Enter string");
    scanf("%[^'\n']s",arr);

    Reverse(arr);

    return 0;
}