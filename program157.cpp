#include <iostream>
using namespace std;

template <class T>
int Min(T *Arr, int size)
{
  T Min = Arr[0];
  int i = 0;

  for(i = 0; i < size; i++)
  {
    if (Arr[i] < Min)
    {
      Min = Arr[i];
    }
  }
  return Min;
}

int main()
{
  int Brr[] = {10, 20, 30, 40, 50};
  int iret = Min(Brr,5);
  cout<<"Min is :"<<iret<<endl;

  float Crr[] = {10.9, 20.5, 30.2, 40.3, 50.2};
  float fret = Min(Crr,5);
  cout<<"Min is :"<<fret<<endl;

  return 0;
}