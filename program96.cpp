#include<iostream>
using namespace std;

// check if it is alphabet 

int ChkAlpha(char ch) 
{  
  
 char cCnt = 'A';
 int iCnt=0;
 while (cCnt <='Z')
  {
  
   if(ch==cCnt)
   {
     iCnt++;
     break;
   }
  else if (ch == cCnt +32)
   {

    iCnt++;
    break;  
   }
   cCnt++;
  }

 return iCnt;
}


int main()
{
  char cValue = '\0';
  int iRet = 0;
  int iCnt=0;
  

 cout<<"enter string"<<endl;
 cin>>cValue;
 
 iRet = ChkAlpha(cValue);

 if (iRet!=0)
 {
  cout<<"it is a charachter" <<endl;
 }
 else
 {
  cout<<"it is not a charachter" <<endl;
 }
 return 0;

} 