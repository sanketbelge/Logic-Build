#include<iostream>

using namespace std;

void StrCopyX(char *str, char *copystr, int length)
{

	while((*str != '\0') && (length != 0))
	{
		*copystr = *str;
		
		str++;
		copystr++;
		length--;
	}

	*copystr = '\0';
}

int main()
{
	char Arr[30];	
	char Brr[30];
	int value = 0;

	cout<<"Enter The String : \n";
	cin.getline(Arr, 30);

	cout<<"Enter The Length To Copy : \n";
	cin>> value;

	StrCopyX(Arr,Brr,value);

	cout<<"Copied String Is : "<<Brr<<endl;

	return 0;
}