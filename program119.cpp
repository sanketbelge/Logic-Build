#include<iostream>

using namespace std;

string StringRevX(string str)
{
	int start = 0;
	int end = str.length()-1;

	while(start < end)
	{
		char temp = str[start];

		str[start] = str[end];
		str[end] = temp;

		start++;
		end--;
	}

	return str;
		
}

int main()
{
	string value;

	cout<<"Enter The String : \n";
	getline(cin, value);

	cout<<StringRevX(value);

	return 0;
}