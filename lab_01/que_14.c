// PROGRAM TO CHECK WHETHER A GIVEN CHARACTER IS CAPITAL, LETTER, SMALL CASE LETTER, A DIGIT OR A SPECIAL SYMBOL. 

#include <stdio.h>

int main()
{
  char c;
  printf("Enter character: ");
  scanf("%c", &c);
  
  int i = c;
  if(i>=65 && i<=90)
  {
    printf("The character is capital letter");
  }
  else if(i>=97 && i<=122)
  {
    printf("The character is small letter");
  }
  else if(i>=48 && i<=57)
  {
    printf("The character is a digit");
  }
  else
  {
    printf("The character is a special symbol");
  }
  return 0;
}