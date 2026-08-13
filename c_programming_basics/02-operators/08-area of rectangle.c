#include <stdio.h>

int main()
{
    float length, width, area;

    printf("Enter the length & width: ");
    scanf("%f %f", &length, &width);

    area = length * width;

    printf("\nArea of the rectangle: %.2f", area);
}
