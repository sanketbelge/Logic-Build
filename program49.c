// Accept N number from user and display all such number which contains 3 digit in it.
// INPUT:	N:	6
//	  	Elements: 8225   665   3   76   953 858 
//OUTPUT:   665 953 858

#include<stdio.h>
#include<stdlib.h>

void Digits(int Arr[], int iLength)
{
	int iCnt = 0,iNo = 0;

	for(iCnt = 0; iCnt < iLength; iCnt++)
	{
		int iDigitCnt = 0;
		iNo = Arr[iCnt];
		while(iNo != 0)
		{
			iDigitCnt++;
			iNo = iNo / 10;

		}

		if(iDigitCnt == 3)
		{
			printf("%d ", Arr[iCnt]);
		}
	} 


}

int main()
{
	int iCnt = 0, *ptr = NULL, iSize = 0, iValue = 0;

	printf("Enter Size Of Element : \n");
	scanf("%d", &iSize);

	ptr = (int *)malloc(iSize*sizeof(int));

	if(ptr == NULL)
	{
		printf("Unable to locate Allocation!!");
		return -1;
	}

	for(iCnt = 0; iCnt < iSize; iCnt++)
	{
		printf("Enter %d Element : \n", iCnt+1);
		scanf("%d", &ptr[iCnt]);
	}

	Digits(ptr, iSize);


	free(ptr);

	return 0;
}