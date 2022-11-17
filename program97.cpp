// accept string from user and count captial letter from given string 

// from program 164 

#include<iostream>
using namespace std;

int CheckCapital(char ch)
{
 
 char check='A';
 int iCnt = 0;
 while (check <= 'Z')
{
  
   if(ch==check)
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
 char cValue = '\0';
 int iRet = 0; 

 cout<<"enter string"<<endl;
 cin>>cValue;
 
 iRet=CheckCapital(cValue);

 if (iRet!=0)
 {
 
  cout<<"it is a capital letter"<<endl;
 } 
 else
 {
  cout<<"it is not a capital letter"<<endl;
 } 

 
 return 0;

} 
