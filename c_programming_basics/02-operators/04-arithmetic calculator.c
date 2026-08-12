#include <stdio.h>

int main()
{
    double num1, num2;

    printf("Arithmetic calculator");
    printf("\nEnter two numbers: ");
    scanf("%lf %lf", &num1, &num2);

    printf("\nAddition: %.2lf", num1 + num2);
    printf("\nSubtraction: %.2lf", num1 - num2);
    printf("\nMultiplication: %.2lf", num1 * num2);
    
    if (num2 != 0)
    {
        printf("\nDivision: %.2lf", num1 / num2);
        printf("\nModulo: %d", (int)num1 % (int)num2);
    }
    else
    {
        printf("\nNumber cannot divisible by zero");
    }

    return 0;
}
