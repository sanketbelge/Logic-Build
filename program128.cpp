#include<iostream>

using namespace std;

void StrCatX(char *str, char *str2)
{
	while(*str != '\0')
	{
		if(*str >= 'A' && *str <= 'Z')
		{
			*str2 = *str + 32;
			str2++;
		}
		else
		{
			*str2 = *str;	
			str2++;
		}

		str++;
	}
}

int main()
{
	char Arr[30];
	char Brr[30];

	cout<<"Enter The String : \n";
	cin.getline(Arr,30);

	StrCatX(Arr,Brr);

	cout<<"Copied String : "<<Brr<<endl;

	return 0;
}