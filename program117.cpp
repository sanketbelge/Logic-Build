#include<iostream>

using namespace std;

int FirstChar(string str, char ch)
{
	int pos = 0;
	
	while(pos < str.length())
	{
		if(ch == str[pos])
		{
			return pos;
		}

		pos++;
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

	cout<<FirstChar(value, charvalue);

	return 0;
}