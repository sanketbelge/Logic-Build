// Write a program which accept number from user and return difference between summation of even digits
// and summation of odd digits.

//Input  : 2395
//output : -15 (2 -17)
//INPUT  : 1018
//OUTPUT : 6 (8 -2)

#include<stdio.h>

int CountDiff(int iNo)
{
	if(iNo < 0)
	{
		iNo = -iNo;
	}

	register int iCnt = 0;
	int iDigit = 0;
	int iSumOdd = 0;
	int iSumEven = 0;

	while(iNo != 0)
	{
		iDigit = iNo % 10;
		if(iDigit % 2 != 0)
		{
			iSumOdd = iSumOdd + iDigit;
		}
		else
		{
			iSumEven = iSumEven + iDigit;
		}
		
		iNo = iNo/10;
	}

	return iSumEven-iSumOdd;
}

int main()
{
	int iValue = 0;
	int iRet = 0;

	printf("Enter The No : ");
	scanf("%d", &iValue);

	iRet = CountDiff(iValue);
	printf("Difference Is : %d", iRet);

	return 0;
}