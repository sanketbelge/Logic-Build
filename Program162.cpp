// write generic program to accept n values from user and search Last occurance of any specific value

#include<iostream>
using namespace std;

template  <class T>
int SearchLastOcc(T *Brr, int iSize, T Value)
{
    int iCnt;
   
    for(iCnt = iSize-1; iCnt >=0; iCnt--)
    {
        if(Brr[iCnt] == Value)
        {
            break;
        }
    }
    return iCnt;
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
    cout<<"Enter the number to search Last occurance\n";
    cin>>iNo;
    iRet = SearchLastOcc(Arr,iLength,iNo);
    cout<<"Lastt occurance is : "<<iRet<<endl;

   
    return 0;
}