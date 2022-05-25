#include<stdio.h>
int main()
{
    printf("OMG!\n");

    // DATA TYPE;
    int num = 10;
    char alpha = 'A';
    double d_var = 40.132;

    int num_1;
    //FORMAT SPECIFIER
    /*
        num ==> int ==> %d
        alpha ==> char ==> %c
        d_var ==> double ==> %ld
    */
    printf("num - %d\n", num);
    printf("alpha - %c\n", alpha);
    printf("d_var - %lf\n", d_var);

    num_1 = 11; //assignment
    printf("num_1 - %d\n", num_1);

    num_1 = 200; // assignment
    printf("num_1 - %d\n", num_1);

    num_1 = 60; // assignment
    printf("num_1 - %d\n", num_1);
    //assignment multiple times possible, initialization only once

    return 0;
}