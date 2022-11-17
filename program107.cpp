#include <iostream>
using namespace std;

int Difference(char str[])
{
  int iCnt=0;
  int iSnt=0;
  int iDiff=0;
  while (*str!= '\0')
  {
    if ((*str>='A')&&(*str<='Z'))
      {
          iCnt++;

      }
   else if((*str>='a')&&(*str<='z'))
     { 
         iSnt++;
     }
   iDiff = iSnt - iCnt;
   str++;
   
  }

 return iDiff; 
}

int main()
{ 

  char Arr[20];
  cout<<"enter the string"<<endl;
  cin.getline(Arr,20);
  int iRet = 0;
  iRet=Difference(Arr);
  cout<<"the difference between small and capital charachter is : "<<iRet<<endl;
  return 0;
}