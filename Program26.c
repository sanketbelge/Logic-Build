// Write a program which accept number from user and return the count of even digits

//Input  : 2395
//output : 1

#include<stdio.h>

int CountEven(int iNo)
{
	if(iNo < 0)
	{
		iNo = -iNo;
	}

	register int iCnt = 0;
	int iDigit = 0;
	int iCntEven = 0;

	while(iNo != 0)
	{
		iDigit = iNo % 10;
		if(iDigit % 2 == 0)
		{
			iCntEven++;
		}
		
		iNo = iNo/10;
	}

	return iCntEven;
}

int main()
{
	int iValue = 0;
	int iRet = 0;

	printf("Enter The No : ");
	scanf("%d", &iValue);

	iRet = CountEven(iValue);
	printf("Count Of Even Digit Is : %d", iRet);

	return 0;
}