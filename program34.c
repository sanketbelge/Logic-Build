//accept n nos from user and display element divisible by 5 and 3 
#include<stdio.h>
#include<stdlib.h>

void Display(int Arr[],int iLength)

{  
    int iCnt=0;
    
    for(iCnt = 0 ;iCnt < iLength ;iCnt++)
    {
        if ( ((Arr[iCnt] % 3) == 0) && ((Arr[iCnt]%5)==0))
        {
            printf("%d\t",Arr[iCnt]);
        }
       
     
    }

  
   
}

int main()
{
 
int iSize=0;
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

  printf("enter element : %d ", iCnt+1);
  scanf("%d",&p[iCnt]);
}

Display(p,iSize);


free(p);

return 0;
}