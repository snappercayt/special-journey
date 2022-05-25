#include <stdio.h>

int main()
{

    // sum of digit
    // 1234 ==> 1 + 2 + 3 + 4 ==> 10
    // % and /
    // % ==> remainder
    // / ==> quotient

    // 1234 % 10 ==> 4
    // 1234 / 10 ==> 123

    // variable declaration
    int num, sum;
    int div1, div2, div3;

    // 1. Input
    printf("Enter the number");
    scanf("%d", &num); // 1234

    // 2. Processing
    div1 = num % 10; // 1234 % 10 => 4
    num = num / 10;  // 1234 / 10 => 123
    // printf("%d %d",div1,num);

    div2 = num % 10; // 123 % 10 => 3
    num = num / 10;  // 123 / 10 => 12
    // printf("%d %d",div2,num);

    div3 = num % 10; // 12 % 10 => 2
    num = num / 10;  // 12 / 10 => 1
    // printf("%d %d",div3,num);

    // 1234 ==> 1 + 2 + 3 + 4 ==> 10

    sum = div1 + div2 + div3 + num;

    // 3. Output
    printf("sum = %d", sum);

    return 0;
}