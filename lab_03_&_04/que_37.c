//PROGRAM TO PRINT 2,4,6,8....N

#include<stdio.h>
int main ()
{
  int N ;
  printf("enter the number N:");
  scanf ("%d",&N);

  for(int i = 2 ; i<= N ; i++)
  {
    if (i%2==0)
    {
        printf("%d,",i);
    }
  }
  
    return 0;

}