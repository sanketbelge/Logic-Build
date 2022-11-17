// Accept No From user and print count of 2 in no

#include<stdio.h>

int CountTwo(int iNo)
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

		if(iDigit == 2)
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

	iRet = CountTwo(iValue);
	printf("%d", iRet);	

	return 0;
}