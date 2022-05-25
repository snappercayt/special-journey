
/*
        calc the area and circumference of circle
        PI = 3.1412
        area = PI * r * r ;
        circum = 2 * PI * r;
*/

#include <stdio.h>

int main()
{
    // variable declaration part
    float radius, area, circumference;

    // 1.Input
    printf("Enter the radius\n");
    scanf("%f", &radius);

    // 2. Processing the logic
    //   area = 3.1412 * r * r ;
    //   circum = 2 * 3.1412 * r;

    area = 3.1412 * radius * radius;
    circumference = 2 * 3.1412 * radius;

    // 3. Output
    printf("Area = %.2f\n", area);
    printf("Cirumference = %.2f\n", circumference);

    return 0;
}