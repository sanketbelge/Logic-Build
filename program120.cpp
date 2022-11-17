#include<iostream>

using namespace std;

void StrCopyX(char *str, char *copystr)
{
	
	while(*str != '\0')
	{
		*copystr = *str;

		str++;
		copystr++;
	}

	*copystr = '\0';	// explicitly assigned '\0' to copied string
	
}

int main()
{
	char Arr[20];
	char Brr[20];

	cout<<"Enter The String : \n";
	cin.getline(Arr,20);

	StrCopyX(Arr,Brr);

	cout<<"Copied String Is : "<<Brr<<endl; 

	return 0;
}