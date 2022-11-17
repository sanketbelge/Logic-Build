#include<iostream>

using namespace std;

void StrCatX(char *str, char *str2)
{
	while(*str != '\0')
	{
		str++;	
	}
	*str = ' ';
	str++;
	while(*str2 != '\0')
	{
		*str = *str2;
		str++;
		str2++;
	}

	*str = '\0';
}

int main()
{
	char Arr[50];
	char Brr[30];

	cout<<"Enter The 1st String : \n";
	cin.getline(Arr,30);

	cout<<"Enter The 2nd String : \n";
	cin.getline(Brr,30);

	StrCatX(Arr,Brr);

	cout<<"After Concatenate : "<<Arr<<endl;

	return 0;
}