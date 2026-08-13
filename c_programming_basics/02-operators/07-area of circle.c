#include <stdio.h>
#define pi 3.14159

int main()
{
    float radius, area;

    printf("Enter the radius: ");
    scanf("%f", &radius);

    area = pi * radius * radius;

    printf("\nArea of the circle: %.2f", area);
}
