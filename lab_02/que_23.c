// PROGRAM TO READ TWO NOS. AND CALCULATE POWER WITHOUT USING HEADER FILE(<MATH.H>)

#include <stdio.h>

int main()
{
  int x, n, result = 1;
  printf("Enter a number ");
  scanf("%d", &x);
  printf("Enter a exponent ");
  scanf("%d", &n);
  
  for(int i = 1; i <= n; i++)
  {
    result *=x;
  }
  printf("The result = %d", result);

  return 0;
}