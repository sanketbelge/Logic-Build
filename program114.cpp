#include<iostream>

using namespace std;

int CntSpaces(string str)
{
	int ch = 0, cnt =0;
	
	while(ch <= str.length()-1)
	{
		if(str[ch] == ' ')
		{
			cnt++;
		}	
		ch++;
	}
	
	return cnt;
}
int main()
{
	string value;

	cout<<"Enter The String : "<<endl;
	getline(cin,value);

	cout<<"No Of Space : "<<CntSpaces(value)<<endl;

	return 0;
}

