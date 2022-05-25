#include<stdio.h>
#include<limits.h>

int main()
{

    int num = 67;
    // 4 bytes of 'num' variable to save binary of 67 in memory

    printf("\t\t\t signed max value - %d \n", INT_MAX); // 2147483647
    printf("\t\t\t signed min value - %d \n", INT_MIN); //-2147483648

    //unsigned will store int but with format specifier %u gives only positive value
    unsigned int no = -2147483648;
    printf("\t\t\t %u \n", no);

    printf("\t\t\t unsigned max value - %u\n", UINT_MAX);

    /*

                int ==> 4 bytes ( signed )
                32 bit ( 1 bit for sign, MSB) ---> 2 ^ 32-1 = 2147483648


                unsigned int ==> 4 bytes
                32 bit without MSB ---> 2 ^ 32 = 4294967296


    */
    return 0; 
}