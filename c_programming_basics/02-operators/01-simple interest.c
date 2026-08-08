#include <stdio.h>

int main()
{
    float p, n, r, si;
    
    printf("Calculate simple interest\n");
    printf("Enter principle amount: ");
    scanf("%f", &p);
    printf("Enter number of years: ");
    scanf("%f", &n);
    printf("Enter rate of interests: ");
    scanf("%f", &r);

    si = p * n * (r / 100);

    printf("\nSimple interest is %.2f", si);
    
    return 0;
}
