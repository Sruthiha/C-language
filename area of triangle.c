#include <stdio.h>

int main()
{
    float base, height, area;
    printf("Enter base of the triangle: ");
    scanf("%f", &base);
    printf("Enter height of the triangle: ");
    scanf("%f", &height);
    area = (base * height) / 2;
    printf("Area of the triangle = %.2f sq. units", area);
    return 0;
}
