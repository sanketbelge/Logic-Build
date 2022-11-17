#include <iostream>
using namespace std;

void Reverse(char str[])
{
   char *start=str;
   char *end = str;
   char temp;
 while (*end!='\0')
  {
    end++;    
  }
 
 end--;
 
 while(start<=end)
   {
     temp=*start;
     *start=*end;
     *end=temp;

    start++;
    end--;
   }
 
}



int main()
{
  char Arr[20];
  cout<<"enter string"<<endl;
  cin. getline(Arr,20);
 
  Reverse(Arr);
  cout<<"the reverse of the given string is: "<<Arr<<endl;
 return 0;
}