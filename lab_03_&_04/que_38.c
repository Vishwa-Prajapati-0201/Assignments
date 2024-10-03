// PROGRAM TO PRINT 1,4,9,16,25...N

#include<stdio.h>
int main ()
{
  int n;
  printf("enter the number n: ");
  scanf("%d",&n);

  for(int i = 1 ; i<=n ; i++)
  {
    printf("%d,",i*i);
  }

    return 0;

}