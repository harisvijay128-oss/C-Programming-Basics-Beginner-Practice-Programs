#include <stdio.h>

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n % 5 == 0) {
        printf("\n%d divisible by 5", n);
    } else {
        printf("\n%d not divisible by 5", n);
    }

    return 0;
}
