#include <stdio.h>

void Display(int iRow, int iCol)
{
   int i=0;
   int j=0;

if (iRow!=iCol)
{

 printf("no of rows and columns should be same");
 return;


}

 for (i = iRow;i>=1;i--)
   {
 
for (j = 1;j<=iCol;j++)
 {
   if (i==j)
{
 
 printf("#\t");

}
else if (j<i)
{
 printf("*\t");

}
else
{
printf("@\t");

}

   } 
    printf("\n");
   } 

  
}


int main()
{
  int iValue1 = 0;
  int iValue2 = 0;
  printf("please enter the value of row : \n");
  scanf("%d",&iValue1);

  printf("please enter the value of columns : \n");
  scanf("%d",&iValue2);


  Display(iValue1,iValue2);

 return 0;

}