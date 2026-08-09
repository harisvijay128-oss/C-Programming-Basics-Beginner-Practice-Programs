#include <stdio.h>

int main()
{
    float f,c;
    char s;

    printf("Temperature calculator");
    printf("\nSelect your converter F to C or C to F: ");
    scanf("%c", &s);

    if (s == 'F' || s == 'f')
    {
        printf("\nEnter the celsius value is: ");
        scanf("%f", &c);
        f=(1.8*c)+32;
        printf("\nConverted farenheit value is: %.2f",f);
    }
    else if (s == 'C' || s == 'c')
    {
        printf("\nEnter the farenheit value is: ");
        scanf("%f", &f);
        c=(f-32)/1.8;
        printf("\nConverted celsius value is: %.2f",c);
    }
    else
        printf("Invalid input");

    return 0;
}
