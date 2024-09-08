// program to print ascii code of any character 

#include <stdio.h>

int main()
{
  char ch;
  printf("Enter character: ");
  scanf("%c", &ch);
  
  printf("The ascii code of %c is %d", ch, ch);
  return 0;
}