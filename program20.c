//accept no from user and return the difference between summation of all factors and non fact



#include <stdio.h>
int DiffFact(int iNo)
{


int iCnt = 0;
int iAdd = 0;
int iSum = 0;
int iDiff= 0;

if (iNo<0)
{
 iNo=-iNo;
}

for (iCnt =1;iCnt<iNo;iCnt ++)
{
  if ((iNo % iCnt)==0)
{
 
 iAdd = iAdd + iCnt ;
}
else 
{

iSum = iSum + iCnt ; 

}
 iDiff= iAdd - iSum ; 
}


 return iDiff;
 
}


int main()

{

int iValue=0;
int iRet=0;

printf("enter number:\n");
scanf("%d",&iValue);

 iRet= DiffFact(iValue);
 printf("the difference in addition of non factors and non factor is %d \n",iRet);

return 0;


}