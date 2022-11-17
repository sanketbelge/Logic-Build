#include<iostream>

using namespace std;

void Display(char ch)
{

	if(ch >= 'a' && ch <= 'z')
	{
		while(ch >= 'a')
		{
			printf("%c  ",ch);
			ch--;
		}
	}
	else if(ch >= 'A' && ch <= 'Z')
	{
		while(ch <= 'Z')
		{
			printf("%c  ",ch);
			ch++;
		}
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