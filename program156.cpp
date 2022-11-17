#include <iostream>
using namespace std;

template <class T>
int Max(T *Arr, int size)
{
  T Max = Arr[0];
  int i = 0;

  for(i = 0; i < size; i++)
  {
    if (Arr[i] > Max)
    {
      Max = Arr[i];
    }
  }
  return Max;
}

int main()
{
  int Brr[] = {10, 20, 30, 40, 50};
  int iret = Max(Brr,5);
  cout<<"Max is :"<<iret<<endl;

  float Crr[] = {10.9, 20.5, 30.2, 40.3, 50.2};
  float fret = Max(Crr,5);
  cout<<"Max is :"<<fret<<endl;

  return 0;
}