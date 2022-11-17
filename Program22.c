// Accept No From user and check wheather if it cointains 0 or not

#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkZero(int iNo)
{
	if(iNo < 0)
	{
		iNo = -iNo;
	}
	
	int iDigit = 0;

	while(iNo != 0)
	{
		iDigit = iNo % 10;

		if(iDigit == 0)
		{
			return TRUE;
		}
		iNo = iNo / 10;
	}

	return FALSE;

}

int main()
{
	int iValue = 0;
	BOOL bRet = FALSE;

	printf("Enter Number : ");
	scanf("%d", &iValue);
	
	bRet = ChkZero(iValue);

	if(bRet == 1)
	{
		printf("It Contains Zero");
	} 
	else
	{
		printf("There is no Zero");
	}

	return 0;
}