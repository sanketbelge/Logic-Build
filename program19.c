// accept nos and return summation of its non factors 


#include <stdio.h>
int SumNonFactors(int iNo)
{


int iCnt = 0;
int iAdd = 0;
if (iNo<0)
{
 iNo=-iNo;
}

for (iCnt =1;iCnt<iNo;iCnt ++)
{
  if ((iNo % iCnt)!=0)
{
 
 iAdd = iAdd + iCnt ;
 
 
}

}
 return iAdd;
 
}


int main()

{

int iValue=0;
int iRet=0;

printf("enter number:\n");
scanf("%d",&iValue);

iRet= SumNonFactors(iValue);
 printf("the addition of non factors is %d \n",iRet);

return 0;


}