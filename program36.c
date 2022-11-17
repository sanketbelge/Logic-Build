// accept n no from user in an Array and return frequency of even no 

#include<stdio.h>
#include<stdlib.h>

int CountEven(int Arr[] ,int iLength)
{
    int iCnt = 0;
   int iEvenCnt=0;
    printf("Even Numbers are :\n");

    for(iCnt = 0 ;iCnt < iLength ;iCnt++)
    {
        if( (Arr[iCnt] % 2) == 0)
        {
            iEvenCnt++;
        }
    }
return iEvenCnt ;
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

  iRet= CountEven(iPtr , iSize);
  printf("number of even elements are: %d\n",iRet);

    free(iPtr);

    return 0;
}