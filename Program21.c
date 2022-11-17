// Accept no from user and print its digit in reversed order

#include<stdio.h>

void DisplayRev(int iNo)
{
	if(iNo < 0)
	{
		iNo = -iNo;
	}

	int iDigit = 0;

	while(iNo != 0)
	{
		iDigit = iNo % 10;
		printf("%d\n", iDigit);
		iNo = iNo / 10;
	}

}

int main()
{
	int iValue = 0;

	printf("Enter The Value : ");
	scanf("%d", &iValue);

	DisplayRev(iValue);

	return 0;
}

// TIME COMPLEXITY : 