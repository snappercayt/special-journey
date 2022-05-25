#include<stdio.h>

int main()
{
    int num = 10;

    //printf("%d", num);

    //width specifier

    printf("%06d\n", num); //right justfication

    num = 1110;
    int num_a = 234;
    printf("%8d%2d\n", num, num_a); // left justfication with negative


    float fvar = 12.5555; //init + declar

    printf("%06.2f\n", fvar);
    printf("%01.1f\n", fvar);
    printf("%-6.2f\n", fvar);
    printf("%.2f\n", fvar);
    printf("%.f\n", fvar);
    return 0;
}