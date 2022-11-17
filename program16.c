//accept no from user and display its multiplication of factors 

#include <stdio.h>
int MultFact(int iNo)
{

    int iCnt=0;
    int imul=1;
   for (iCnt =1;iCnt<iNo;iCnt ++)
  {
  if ((iNo % iCnt)==0)
 {
    printf("%d\n",iCnt);
  imul=imul*iCnt;
 }
  
}

return imul;

}

int main()
{

int iValue=0;
int iRet=0;
printf("enter number");
scanf("%d",&iValue);

iRet = MultFact(iValue);

printf("multiplication of factors is : %d",iRet);

return 0 ;


}