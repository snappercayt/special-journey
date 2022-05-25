/*
Problem Statement:

2. Write a program to accept a number and print the number in character, 
decimal, octal and hex formats. 

*/


#include<stdio.h>

int main()
{

    int num1;

    printf("Enter number - ");

    scanf("%d", &num1);

    printf("char - %c, decimal - %d, octal - %o, hexadecimal - %x", num1, num1, num1, num1);
    return 0;
}
