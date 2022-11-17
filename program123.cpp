#include<iostream>

using namespace std;

void StrCopyX(char *str, char *copystr)
{

	while(*str != '\0')
	{
		if((*str >= 'a' && *str <= 'z') || *str == ' ')
		{
			*copystr = *str;
			copystr++;
		}

		str++;
	}

	*copystr = '\0';
}

int main()
{
	char Arr[30];	
	char Brr[30];

	cout<<"Enter The String : \n";
	cin.getline(Arr, 30);

	StrCopyX(Arr,Brr);

	cout<<"Copied String Is : "<<Brr<<endl;

	return 0;
}