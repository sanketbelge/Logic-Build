#include<stdio.h>

void Pattern(int iNo)
{
   int i = 0;
   char ch = '\0';
   
   for(i = 1, ch = 'A'; i <= iNo; i++, ch++)
   {
     printf("%c\t",ch);
   }
   printf("\n");
}

int main()
{
  int iValue = 0;

  printf("Please enter the no of elements :\n");
  scanf("%d", &iValue);

  Pattern(iValue);

  return 0;
}