#include<iostream>

using namespace std;

int LastChar(string str, char ch)
{
	int pos = str.length()-1;
	
	while(pos > 0)
	{
		if(ch == str[pos])
		{
			return pos;
		}

		pos--;
	}

	return -1;
}

int main()
{
	string value;
	char charvalue;

	cout<<"Enter The String : \n";
	getline(cin, value);

	cout<<"Enter Character : \n";
	cin>>charvalue;

	cout<<LastChar(value, charvalue);

	return 0;
}