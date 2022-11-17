#include <iostream>
using namespace std;


int CountCapital(char str[])
{
  int iCnt=0;
  
  while (*str!='\0')
   {
     if ((*str>='A')&&(*str<='Z'))
      {
         iCnt++;

      }
    str++;     

   }

 return iCnt;
}

int main()
{
 char Arr[20];
 cout<<"enter string"<<endl;
 cin.getline(Arr,20);
 int iRet = 0;

 iRet=CountCapital(Arr);
 
 cout<<"the no of capital letters are : "<<iRet<<endl; 


return 0;
}