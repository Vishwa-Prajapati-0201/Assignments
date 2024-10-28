// PROGRAM TO CALCULATE FACTORIAL OF A NO.

#include <stdio.h>

int main()
{
  int n;
  printf("Enter a number you want factorial of:  ");
  scanf("%d", &n);

  int product = 1;
  for (int i = 1; i <= n; i++)
  {
    product *= i;
  }
  printf("The factorial of %d is %d", n, product);

  return 0;
}