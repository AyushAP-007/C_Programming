// Assignment 23, Problem 4: Write a program which accept string from user and display only digits from that string.
// Input : "marve89llous121" -> 89121
// Input : "Demo" ->

#include<stdio.h>

void DisplayDigit(char *str)
{
    while(*str != '\0')
    {
        if((*str >= '0') && (*str <= '9'))
        {
            printf("%c", *str);
        }
        str++;
    }
}

int main()
{
    char arr[20];

    printf("Enter string");
    scanf("%[^'\n']s",arr);

    DisplayDigit(arr);

    return 0;
}