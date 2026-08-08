#include <stdio.h>

int main()
{
    int num1, num2;
    
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    
    if (num1 > num2)
        printf("\nLargest number: %d", num1);
    else if (num1 < num2)
        printf("\nLargest number: %d", num2);
    else
        printf("\nTwo numbers are equal");
    
    return 0;
}
