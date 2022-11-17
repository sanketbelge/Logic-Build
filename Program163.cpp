// write generic program to accept n values from user and reverse the content

#include<iostream>
using namespace std;

template  <class T>
void Reverse(T *Brr, int iSize)
{
    int iCnt = 0;
    for(iCnt = iSize-1; iCnt>=0;iCnt--)
    {
        cout<<Brr[iCnt]<<endl;
    }
    
}
int main()
{
    int *Arr ;
    int iLength, iCnt;
    cout<<"Enter the size of array\n";
    cin>>iLength;
    cout<<"Enter the elements of array"<<endl;
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        cin>>Arr[iCnt];
    }
    Reverse(Arr,iLength);

   
    return 0;
}