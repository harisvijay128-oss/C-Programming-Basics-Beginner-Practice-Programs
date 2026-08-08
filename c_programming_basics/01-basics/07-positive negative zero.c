#include <stdio.h>

int main()
{
    int num;
    
    printf("Enter a numbers: ");
    scanf("%d", &num);
    
    if (num > 0)
        printf("\nPositive integer: %d", num);
    else if (num < 0)
        printf("\nNegative integer: %d", num);
    else
        printf("\nEqual to zero: %d", num);
    
    return 0;
}
