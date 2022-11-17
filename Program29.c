// accept no from user and  return multiplication of all digits.

// INPUT  : 2395
// OUTPUT : 270
// INPUT  : 9440
// OUTPUT : 144

#include<stdio.h>

int MultDigits(int iNo)
{
	if(iNo < 0)
	{
		iNo = -iNo;
	}

	int iMult =1, iDigit =0;

	while(iNo != 0)
	{
		iDigit = iNo % 10;
		if(iDigit == 0)
		{
			iDigit = 1;
		}
		iMult = iMult * iDigit;
		iNo = iNo/10;
	}

	return iMult;
}

int main()
{
	int iValue = 0;
	int iRet = 0;

	printf("Enter The No : ");
	scanf("%d", &iValue);

	iRet = MultDigits(iValue);
	printf("Multiplication Is : %d", iRet);

	return 0;	
}