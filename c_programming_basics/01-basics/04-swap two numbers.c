#include <stdio.h>

int main()
{
  int num1, num2, temp;

  printf("Enter two integers: ");
  scanf("%d %d", &num1, &num2);

  printf("\nBefore swap: num1 %d, num2 %d", num1, num2);

  // swapping values between two variables using temp variable
  temp = num1;
  num1 = num2;
  num2 = temp;

  printf("\nAfter swap: num1 %d, num2 %d", num1, num2);
  
  return 0;
}
