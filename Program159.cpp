// write generic program to accept n values from user and return smallest value

#include<iostream>
using namespace std;

template  <class T>
int CountFreq(T *Brr, int iSize, T Value)
{
    int iCnt;
    int Freq = 0;
   
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Brr[iCnt] == Value)
        {
            Freq++;
        }
    }
    return Freq;
}
int main()
{
    int *Arr ;
    int iLength, iCnt, iRet;
    int iNo;

    cout<<"Enter the size of array\n";
    cin>>iLength;
    cout<<"Enter the elements of array"<<endl;
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        cin>>Arr[iCnt];
    }
    cout<<"Enter the number to count the frequency\n";
    cin>>iNo;
    iRet = CountFreq(Arr,iLength,iNo);
    cout<<"Frequency is : "<<iRet<<endl;

   
    return 0;
}