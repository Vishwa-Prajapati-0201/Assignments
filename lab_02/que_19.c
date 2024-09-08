// PROGRAM TO READ A CHARACTER AND CHECK WHETHER IT IS A SMALL CASE LETTER OR NOT USING CONDATIONAL OPERATOR. 

#include <stdio.h>

int main()
{
  char c;
  printf("Enter character ");
  scanf("%c", &c);
  
  int a = c;
  if(a>=97 && a<=122)
  {
    printf("The character is a small case letter");
  }
  else
  {
    printf("The character is not a small case letter");
  }
  return 0;
}