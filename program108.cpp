#include <iostream>
using namespace std;

bool Chkvowels(char str[])
{

  while (*str !='\0')

   {
     if ((*str=='a')||(*str=='e')||(*str=='i')||(*str=='o')||(*str=='u'))
         {
            
            return true;
            break;
         }
      else 
       {

      return false;

      }
     str++; 
     
   }

}



int main()
{

  char Arr[20];
  cout<<"enter string"<<endl;
  cin.getline(Arr,20);
  bool bret=0;

  bret = Chkvowels(Arr);
  
  if (bret==true)
  {
    cout<<"True";

  }
 else
 {

 cout<<"False"; 

 }


 return 0;
}