#include <stdio.h>
#include <math.h>

int main()
{
    float p, n, r, ci;
    
    printf("Calculate compound interest\n");
    printf("Enter principle amount: ");
    scanf("%f", &p);
    printf("Enter number of years: ");
    scanf("%f", &n);
    printf("Enter rate of interests: ");
    scanf("%f", &r);

    ci = p * pow(1 + r / 100, n) - p;

    printf("\nCompound interest is %.2f", ci);
    
    return 0;
}
