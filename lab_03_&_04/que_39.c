//PROGRAM TO PRINT 1/1! + 2/2! + 3/3!....N

#include<stdio.h>
int main ()
{
  int n;
  printf("enter the number n :");
  scanf ("%d"  ,&n);

  for( int i = 1 ; i<=n ; i++)
  {
   printf("%d/%d! + " ,i, i);

  }

    return 0;
}