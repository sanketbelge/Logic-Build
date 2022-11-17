#include<iostream>

using namespace std;

void Display(char ch)
{
	if(ch >= 'a' && ch <= 'z')
	{
		printf("%c\n",ch-32);
	}
	else if(ch >= 'A' && ch <= 'Z')
	{
		printf("%c\n",ch+32);
	}
	else
	{
		cout<<ch<<endl;
	}
}

int main()
{
	char Value = '\0';

	cout<<"Enter The Character : "<<endl;
	cin>>Value;

	Display(Value);

	return 0;
}