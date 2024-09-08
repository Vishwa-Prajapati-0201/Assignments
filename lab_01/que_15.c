//PROGRAM TO READ MARKS OF FIVE SUBJECT AND PRINT DIVISION. 

#include <stdio.h>

int main()
{
  int a, b, c, d, e, percentage;
  printf("Enter marks of subject a: ");
  scanf("%d", &a);
  printf("Enter marks of subject b: ");
  scanf("%d", &b);
  printf("Enter marks of subject c: ");
  scanf("%d", &c);
  printf("Enter marks of subject d: ");
  scanf("%d", &d);
  printf("Enter marks of subject e: ");
  scanf("%d", &e);
  
  percentage = (a+b+c+d+e)/5;
  
  if(percentage>=80 && percentage<=100)
  {
    printf("Division A");
  }
  else if(percentage>=70 && percentage<=80)
  {
    printf("Division B");
  }
  else if(percentage>=60 && percentage<=70)
  {
    printf("Division C");
  }
  else if(percentage>=50 && percentage<=60)
  {
    printf("Division D");
  }
  else
  {
    printf("Division E");
  }
  return 0;
}