#include<iostream>

using namespace std;

void DisplayCapital(char *ch)
{
	while(*ch != '\0')
	{
		if(*ch >= '0' && *ch <= '9')
		{
			cout<<*ch<<" ";
		}
	
		ch++;
	}
	cout<<endl;
}

int main()
{
	char Arr[30];

	cout<<"Enter The String : \n";
	cin.getline(Arr, 30);

	DisplayCapital(Arr); 	
	
	return 0;
}