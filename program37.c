// accept n no from user in an Array and return difference frequency of even no and odd no 

#include<stdio.h>
#include<stdlib.h>

int Difference(int Arr[] ,int iLength)
{
    int iCnt = 0;
    int iEvenCnt=0;
    int iDiff=0;
    int  iOddCnt=0;
    

    for(iCnt = 0 ;iCnt < iLength ;iCnt++)
    {
        if( (Arr[iCnt] % 2) == 0)
        {
            iEvenCnt++;
        }
       else if (Arr[iCnt]%2 !=0)
     {
       
       iOddCnt++; 
     }
       iDiff =  iOddCnt - iEvenCnt;
        if (iDiff <0)
        {
         iDiff = -iDiff;
       }

    }

  return iDiff;
}
int main()
{
    int iSize = 0, iCnt = 0;
    int *iPtr = NULL;
    int iRet=0;

    printf("Enter Number of Elements\n");
    scanf("%d",&iSize);

    iPtr = (int*)malloc(iSize * sizeof(int));

    printf("Enter the Values\n");
    for(iCnt = 0 ;iCnt < iSize ;iCnt++)
    {
        scanf("%d",&iPtr[iCnt]);
    }

  iRet= Difference(iPtr , iSize);

  printf("the difference is: %d\n",iRet);

    free(iPtr);

    return 0;
}