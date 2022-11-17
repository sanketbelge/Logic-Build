// Write a program which accept number from user and return the count of odd digits

//Input  : 2395
//output : 3
//INPUT  : 1018
//OUTPUT : 2

#include<stdio.h>

int CountOdd(int iNo)
{
	if(iNo < 0)
	{
		iNo = -iNo;
	}

	register int iCnt = 0;
	int iDigit = 0;
	int iCntOdd = 0;

	while(iNo != 0)
	{
		iDigit = iNo % 10;
		if(iDigit % 2 != 0)
		{
			iCntOdd++;
		}
		
		iNo = iNo/10;
	}

	return iCntOdd;
}

int main()
{
	int iValue = 0;
	int iRet = 0;

	printf("Enter The No : ");
	scanf("%d", &iValue);

	iRet = CountOdd(iValue);
	printf("Count Of Odd Digit Is : %d", iRet);

	return 0;
}