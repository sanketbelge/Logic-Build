// accept charachter is small or not 
 

#include<iostream>
using namespace std;

int Checksmall(char ch)
{
 
 char check='a';
 int iCnt = 0;
 while (check <= 'z')
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
 
 iRet=Checksmall(cValue);

 if (iRet!=0)
 {
 
  cout<<"it is a small letter"<<endl;
 } 
 else
 {
  cout<<"it is not a small letter"<<endl;
 } 

 
 return 0;

} 
