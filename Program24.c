// Accept No From user and print the count of 4 in no

#include<stdio.h>

int CountFour(int iNo)
{
	if(iNo < 0)
	{
		iNo = -iNo;
	}
	
	int iCnt = 0;
	int iDigit = 0;

	while(iNo != 0)
	{
		iDigit = iNo % 10;

		if(iDigit == 4)
		{
			iCnt++;
		}
		iNo = iNo / 10;
	}

	return iCnt;

}

int main()
{
	int iValue = 0;
	int iRet = 0;

	printf("Enter Number : ");
	scanf("%d", &iValue);

	iRet = CountFour(iValue);
	printf("%d", iRet);	

	return 0;
}