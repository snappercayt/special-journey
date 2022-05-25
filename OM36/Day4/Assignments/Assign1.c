/*
Problem Statement:
Write a program to Accept two numbers and
a. find its sum.
b. find its difference.
c. find its product.
Test the program using different integral data type signed/unsigned
char/int/long.
First test the result using small values. Then test the same program using large
values. Observe the results.
*/

#include<stdio.h>

int main()
{

    int num1, num2, isum; //default signed -2^31 to 2^31 i.e 4 bytes
    unsigned int unum1, unum2, uisum; // 2^32 complete i.e. 4 bytes

    char ch1, ch2, csum; // 1 bytes
    unsigned char uch1, uch2, ucsum; // 1 byte

    long int lnum1, lnum2, lisum; // 4 byte
    short int snum1, snum2, sisum; // 2 byte

    //sum 

    printf("Enter all values int, uint, char, uchar, long int, short int");
    scanf("%d %d %u %u %c %c %c %c %ld%ld%hd%hd", &num1, &num2, &unum1, &unum2, &ch1, &ch2, &uch1, &uch2, &lnum1, &lnum2, &snum1, &snum2);
    //printf("%d%d%u%u%c%c%c%c%ld%ld%hd%hd", num1, num2, unum1, unum2, ch1, ch2, uch1, uch2, lnum1, lnum2, snum1, snum2);

    //signed int
    isum = num1+num2;//1+2
    printf("sum of two int number 1, 2 - %d with size %d\n", isum, sizeof(isum)); // 3

    //unsigned int
    uisum = unum1+unum2;//3+4
    printf("sum of two unsigned int number 3, 4 - %u with size %d\n", uisum, sizeof(uisum));//7

    //signed char
    csum = ch1 + ch2;                                  // 3+4
    printf("sum of two signed char number 5, 6 - %c with size %d \n", csum, sizeof(csum)); // 7

    //unsigned char
    ucsum = uch1 + uch2;                                  // 3+4
    printf("sum of two unsigned char number 7, 8 - %c with size %d \n ", ucsum, sizeof(ucsum)); // 7

    //long int
    lisum = lnum1 + lnum2;                                  // 3+4
    printf("sum of two long int number 9, 10 - %ld with size %d \n", lisum, sizeof(lisum)); // 7

    //short int
    sisum = snum1 + snum2;                                  // 3+4
    printf("sum of two short int number 11, 12 - %hd with size %d \n", sisum, sizeof(sisum)); // 7
    return 0;
}