#include<iostream>

using namespace std;

void StrCatX(char *str, char *str2)
{
	int iCnt = 0;

	while(*str != '\0')
	{
		iCnt++;
		str++;	
	}
	str--;

	while(iCnt >= 0)
	{
		*str2 = *str;
		str--;
		str2++;
		iCnt--;
	}

	*str2 = '\0';
}

int main()
{
	char Arr[30];
	char Brr[30];

	cout<<"Enter The 1st String : \n";
	cin.getline(Arr,30);

	StrCatX(Arr,Brr);

	cout<<"Reverse String : "<<Brr<<endl;

	return 0;
}