#include<iostream>

using namespace std;

void DisplayLower(string str)
{
	int ch = 0;

	while(ch < str.length())
	{
		if(str[ch] >= 'A' && str[ch] <= 'Z')
		{
			//str[ch] = str[ch] + 32;
			str[ch] = tolower(str[ch]);
		}

		ch++;
	}	

	cout<<"Enter Stirng In Lower Case iS : "<<str<<endl;
}

int main()
{
	string value;

	cout<<"Enter The String : \n";
	getline(cin, value);

	DisplayLower(value);

	return 0;
}