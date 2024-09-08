// PROGRAM WHICH WILL WORK LIKE A SIMPLE CALCULATOR USING SWITCH-CASE

#include <stdio.h>

int main()
{
  float a, b;
  char c;
  printf("Enter a and b ");
  scanf("%f %f", &a, &b);
  
  printf("Enter operator\n");
  scanf(" %c", &c);
  
  switch(c)
  {
    case '+': printf("%f", a+b);
              break;
    case '-': printf("%f", a-b);
              break;
    case '*': printf("%f", a*b);
              break;
    case '/': printf("%f", a/b);  
              break;
    default : printf("Invalid character");      
  }
  return 0;
}