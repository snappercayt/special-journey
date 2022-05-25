#include<stdio.h>

int main()
{

    int num;
    double dvar;
    char ch;
    float fvar;
    
    //sizeof() ==> operator
    //returns size in bytes which is an integer
    printf("\t\t\tThe is size of int %d bytes\n",sizeof(num)); //4 bytes = 32 bits
    printf("\t\t\tThe is size of double %d bytes\n", sizeof(dvar)); // 8 bytes = 64 bits
    printf("\t\t\tThe is size of character %d bytes\n", sizeof(ch)); // 1 bytes = 8 bits
    printf("\t\t\tThe is size of float %d bytes\n", sizeof(fvar)); // 4 bytes = 32 bits
    return 0;
}