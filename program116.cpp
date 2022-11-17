#include<iostream>

using namespace std;

int ChkOccurence(char *str, char ch)
{
	int iCnt = 0;

	while(*str != '\0')
	{
		if(*str == ch)
		{
			iCnt++;	
		}	

		str++;
	}

	return iCnt;
}

int main()
{
	char Arr[30];
	char value;

	cout<<"Enter The String : \n";
	//getline(cin,Arr);	we cannot use this for arrays can be just use for strings and characters 
	cin.getline(Arr, 30);

	cout<<"Enter Chracter To check : \n";
	cin>>value;

	printf("Frequency Of Letter %c Is : %d ",value,ChkOccurence(Arr,value));

	return 0;
}