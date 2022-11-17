#include<iostream>

using namespace std;

bool ChkSpecial(char ch)
{

	if(ch >= '!' && ch <= '*')
	{
		return true;
	}
	else 
	{
		return false;
	}
	
}


int main()
{
	char Value = '\0';
	char bRet = '\0';

	cout<<"Enter The Character : "<<endl;
	cin>>Value;

	bRet = ChkSpecial(Value);

	if(bRet == true)
	{
		cout<<"TRUE"<<endl;
	}
	else
	{
		cout<<"FALSE"<<endl;
	}

	return 0;
}