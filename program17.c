// accept numbers from user and display its factors in decreasing order 



#include <stdio.h>

void FactRev(int iNo)
{

  int iCnt=0;

 for (iCnt =iNo;iCnt>=1;iCnt--)
  {

  if ((iNo % iCnt)==0)
   {
    printf("%d\n",iCnt);
  }


}
}
 int main()
 {

  int iValue=0;

  printf("enter number");
  scanf("%d",&iValue);

  FactRev(iValue);


 return 0 ;


}