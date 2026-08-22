#include <stdio.h>

int main()
{
    int age;

    printf("Enter your age: ");
    scanf("%d", &age);

    // If age 18 & above true else below 18 false
    if (age >= 18) {
        printf("\n%d : major (True)", age);
    } 
    else {
        printf("\n%d : minor (False)", age);
    }

    return 0;
}
