#include <stdio.h>
#include <math.h>

int main()
{
    float num;
    printf("Enter a number: ");
    scanf("%f", &num);

    if (num >= 0)
    {
        printf("Given number is already positive...");
    }
    else
    {
        printf("\nFind Manually");
        printf("%f", - num);

        printf("\nUsing math function");
        printf("%f", fabs(num);
    }

    return 0;
}
