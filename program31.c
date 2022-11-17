//accept n nos from user and return the difference between summation of even nos and sumation of odd nos 
#include<stdio.h>
#include<stdlib.h>
int Difference(int Arr[],int iLength)

{  int iCnt=0;
   int iEsum=0;
   int iOsum=0;
   int iDiff=0;

    for(iCnt = 0 ;iCnt < iLength ;iCnt++)
    {
        if( (Arr[iCnt] % 2) == 0)
        {
            iEsum=iEsum+Arr[iCnt];
        }
       else 
       {
           
            iOsum=iOsum+Arr[iCnt];
               
       }
    }

  
    
 iDiff= iOsum - iEsum;
 if (iDiff<0)
{
  iDiff= (-iDiff);
}

 return iDiff;
}

int main()
{
 
int iSize=0;
int iRet=0;
int iCnt=0;
int *p=NULL;


p=(int*)malloc(iSize*sizeof(int));

printf("Enter Number of Elements\n");
scanf("%d",&iSize);

if(p==NULL)
{
 printf("unable to allocate memory");
 return -1; 

}


for(iCnt=0;iCnt<iSize;iCnt++)
{

printf("enter element :%d",iCnt+1);
scanf("%d",&p[iCnt]);
}
iRet= Difference(p,iSize);
printf("Result is %d",iRet);

free(p);

return 0;
}