#include<stdio.h>

void Pattern(int iNo)
{
   int iCnt = 0;
   
   for((iCnt = 2);(iCnt = iNo*2); (iCnt <= iNo); (iCnt++))
   {
     printf("%d)t",iCnt);
   }
}

int main()
{
  int iValue = 0;

  printf("Please enter the no of elements :\n");
  scanf("%d", &iValue);

  Pattern(iValue);

  return 0;
}