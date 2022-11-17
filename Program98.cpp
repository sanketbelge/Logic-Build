// accept value from user and check if it is digit or not  

#include<iostream>
using namespace std;


int Checkdigit(char ch)
{ 
  char check='0';
  int iCnt = 0; 
  while (check<='9')
  {
    if (ch==check)
    { 
      iCnt++;
      break;
    }
   check++;
 }
  return iCnt; 
}




int main()
{ 
  char cValue='\0';
  int bRet = 0;

  cout<<"enter char"<<endl;
  cin>>cValue;
 
 bRet = Checkdigit(cValue);

 if (bRet!=0)
 {
   cout<<"it is a digit"<<endl;

 }
 else
{
   cout<<"it is not a digit"<<endl;

 }
  
  
 
 
 return 0;

} 
