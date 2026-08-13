#include <stdio.h>
#include <math.h>

int main()
{
    int num, p, i, n = 0, result;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Enter a power: ");
    scanf("%d", &p);
    if (p < 0) {
        printf("\nNegative value of power is not acceptable");
    } else if (p != 0) {
        n = 1;
        for (i = 0; i < p; i++) {
            n = n * num;
        }
        printf("\nFind manually: %d", n);

        result = (int)round(pow(num, p));
        printf("\nUsing math function: %d", result);
    } else {
        n = 1;
        printf("\nPower of 0 is %d", n);
    }

    return 0;
}
