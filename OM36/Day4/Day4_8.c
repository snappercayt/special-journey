#include<stdio.h>

int main()
{

    /*
    int     4
    char    1
    float   4
    double  8
    */

   //printf("%d", sizeof(19));    //4 byte
   //printf("%d", sizeof(12.23)); //8 byte
   //printf("%d", sizeof(12.23f)); // 4 byte


    char ch = 'A';
    printf("%d  ", sizeof(ch)); //1 byte
    printf("%d  ", sizeof('A')); // 4 byte

    printf("%d  ", sizeof(12l)); // 4 byte
    printf("%d  ", sizeof(12L)); // 4 byte
    printf("%d  ", sizeof(12LL)); // 8 byte
    printf("%d  ", sizeof(12u)); // 4 byte
    printf("%d  ", sizeof(12U)); // 4 byte


    printf("%o ", 0100); // octal
    printf("%d ", 0100); // integer

    printf("%x ", 0x23); // hex
    printf("%d ", 0x23); // integer

    return 0;
}