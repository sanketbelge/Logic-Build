#include <iostream>
using namespace std;


int CountSmall(char str[])
{
  int iCnt=0;
  
  while (*str!='\0')
   {
     if ((*str>='a')&&(*str<='z'))
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

 iRet=CountSmall(Arr);
 
 cout<<"the no of small letters are : "<<iRet<<endl; 


return 0;
}