#include<iostream>

using namespace std;

void strToggleX(char *ch)
{
	while(*ch != '\0')
	{
		if((*ch >= 'A' && *ch <= 'Z'))
		{
			*ch = *ch + 32;
		}
		else if((*ch >= 'a' && *ch <= 'z'))
		{
			*ch = *ch - 32;
		}
	
		ch++;
	}
}

int main()
{
	char Arr[30];
	
	cout<<"Enter The String : "<<endl;
	cin.getline(Arr,30);

	strToggleX(Arr);

	cout<<"String After Toggle : "<<Arr<<endl; 

	return 0;
}