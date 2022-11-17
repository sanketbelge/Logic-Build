// Write a program which accept number from user and return the count of digits in between 3 and 7.

//Input  : 2395
//output : 1
//INPUT  : 1018
//OUTPUT : 0

#include<stdio.h>

int CountRange(int iNo)
{
	if(iNo < 0)
	{
		iNo = -iNo;
	}

	register int iCnt = 0;
	int iDigit = 0;
	int iCntDigit = 0;

	while(iNo != 0)
	{
		iDigit = iNo % 10;
		if(iDigit > 3 && iDigit < 7)
		{
			iCntDigit++;
		}
		
		iNo = iNo/10;
	}

	return iCntDigit;
}

int main()
{
	int iValue = 0;
	int iRet = 0;

	printf("Enter The No : ");
	scanf("%d", &iValue);

	iRet = CountRange(iValue);
	printf("Count Of Digit Is : %d", iRet);

	return 0;
}