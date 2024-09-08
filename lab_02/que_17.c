// PROGRAM TO READ THREE NOS. AND PRINT MAX USING LOGICAL OPERATOR.(&&) 

#include <stdio.h>

int main()
{
  int a, b, c;
  printf("Enter a, b and c ");
  scanf("%d %d %d", &a, &b, &c);
  
  if(a>b && a>c)
  {
    printf("The maximum number is %d", a);
  }
  else if(b>c && b>a)
  {
    printf("The maximum number is %d", b);
  }
  else if(c>a && c>b)
  {
    printf("The maximum number is %d", c);
  }
  return 0;
}