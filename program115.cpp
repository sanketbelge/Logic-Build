#include<iostream>

using namespace std;

bool ChkLetter(char *str, char ch)
{
	

	while(*str != '\0')
	{
		if(*str == ch)
		{
			return true;	
		}	

		str++;
	}

	return false;
}

int main()
{
	char Arr[30];
	char value;

	cout<<"Enter The String : \n";
	//getline(cin,Arr);	we cannot use this for arrays can be just use for strings and characters 
	cin.getline(Arr, 30);

	cout<<"Enter Chracter To check : \n";
	cin>>value;

	if(ChkLetter(Arr, value))
	{
		cout<<"TRUE";
	}
	else
	{
		cout<<"FALSE";
	}


	return 0;
}