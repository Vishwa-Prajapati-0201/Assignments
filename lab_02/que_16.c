// PROGRAM TO READ THREE NOS. AND PRINT MAX. 

#include <stdio.h>

int main()
{
  int a, b, c, max;
  printf("Enter a, b and c ");
  scanf("%d %d %d", &a, &b, &c);
  max = a;
  
  if(b > max)
  {
    max = b;
  }
  if(c > max)
  {
    max = c;
  }
  
  printf("The maximum number is %d", max);
  
  return 0;
}