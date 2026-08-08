#include <stdio.h>

int main()
{
    int num1, num2, num3, sum;
    float average;
    
    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    sum = num1 + num2 + num3;
    average = sum / 3;

    printf("\nAverage value is %.2f", average);
    
    return 0;
}
