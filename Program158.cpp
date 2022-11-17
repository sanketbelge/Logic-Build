// write generic program which accept one value and one number from user. print the value that number of times on screen

#include<iostream>
using namespace std;

template <class T>
void Display(T Value, int Freq)
{
    int iCnt = 0;
    for(iCnt = 1; iCnt <= Freq; iCnt++)
    {
        cout<<Value<<endl;
    }
}

int main()
{
    int iNo1 , iFreq;

    cout<<"Enter a number\n";
    cin>>iNo1;

    cout<<"Enter the frequency of value\n";
    cin>>iFreq;

    Display(iNo1,iFreq);

    float fNo ;
    int fFreq ;

    cout<<"Enter a float value\n";
    cin>>fNo;

    cout<<"Enter the frequency of value\n";
    cin>>fFreq;

    Display(fNo, fFreq);

    char ch ;
    int cFreq ;

    cout<<"Enter a character\n";
    cin>>ch;

    cout<<"Enter the frequency of value\n";
    cin>>cFreq;

    Display(ch, cFreq);

    return 0;

}