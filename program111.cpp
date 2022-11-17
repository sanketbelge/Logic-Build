#include<iostream>

using namespace std;

void DisplayUpper(char *ch)
{
	while(*ch != '\0')
	{
		if(*ch >= 'a' && *ch <= 'z')
		{
			*ch = toupper(*ch);
			//*ch = *ch + 32;
		}
		ch++; 	//	Arithmatic Pointer
	}
}

int main()
{
	char Arr[30];

	cout<<"Enter The String : \n";
	cin.getline(Arr,30);

	DisplayUpper(Arr); 

	cout<<"Upper String : "<<Arr<<endl;

	return 0;
}