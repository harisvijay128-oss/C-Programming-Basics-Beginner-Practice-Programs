#include <stdio.h>

int main()
{
    float base, height, area;

    printf("Enter the base & height: ");
    scanf("%f %f", &base, &height);

    area = 0.5 * base * height;

    printf("\nArea of the triangle: %.2f", area);
}
