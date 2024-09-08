// PROGRAM TO READ THREE NOS. AND PRINT MAX USING CONDITIONAL (? :) OPERATOR

#include <stdio.h>

int main()
{
  int a, b, c;
  printf("Enter a, b and c ");
  scanf("%d %d %d", &a, &b, &c);
  
 (a>b && a>c)? printf("The maximum number is a"): (b>a && b>c)? printf("The maximum number is b"): printf("The maximum number is c");
 
  return 0;
}