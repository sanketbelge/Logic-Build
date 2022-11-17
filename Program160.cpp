// write generic program to accept n values from user and search First occurance of any specific value

#include<iostream>
using namespace std;

template  <class T>
int SearchFirstOcc(T *Brr, int iSize, T Value)
{
    int iCnt;
   
    for(iCnt = 0; iCnt < iSize; iCnt++)
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
    cout<<"Enter the number to search First occurance\n";
    cin>>iNo;
    iRet = SearchFirstOcc(Arr,iLength,iNo);
    cout<<"First occurance is : "<<iRet<<endl;

   
    return 0;
}