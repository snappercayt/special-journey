#include<stdio.h>

int main()
{

    int num1, num2, result; 

    //scanf() - function to accept user input


    //printf("\t\t\t Enter the number 1 and number 2\n\t\t\t");
    //scanf("%d%d", &num1, &num2); // 200 // don't give space or any character in scanf
    //& ==> address of
    //printf("\t\t\t number 1 = %d \n\t\t\t number 2 = %d", num1, num2);

    //float fvar;
    //double dvar;

    //printf("Enter the values");
    //scanf("%d%f%lf", &num1, &fvar, &dvar);
    //printf("%d, %.2f, %lf", num1, fvar, dvar);


    printf("Enter the num1 and num2\n");
    scanf("%d%d", &num1, &num2);

    result = num1 + num2;

    printf("result = %d\n", result);


    return 0;
}