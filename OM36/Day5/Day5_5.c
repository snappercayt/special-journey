#include <stdio.h>
// cal the peri of rectangle
// peri  = 2 * ( len + breadth )

int main()
{
    // variable declaration
    double length, breadth, peri;

    // 1. Input
    printf("Enter the length and breadth");
    scanf("%lf%lf", &length, &breadth);

    // 2. Processing
    // peri  = 2 * ( len + breadth )
    peri = 2 * (length + breadth);

    // 3. output : print the peri
    printf("peri = %.2lf", peri);

    return 0;
}