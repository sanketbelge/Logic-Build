// Accept N number from user and display summation of digits of each no.
// INPUT:	N:	6
//	  	Elements: 8225   665   3   76   953 858 
//OUTPUT:   17  17  3  13  17  21

#include<stdio.h>
#include<stdlib.h>

void DigitsSum(int Arr[], int iLength)
{
	int iCnt = 0,iNo = 0, iDigit = 0;

	for(iCnt = 0; iCnt < iLength; iCnt++)
	{
		iNo = Arr[iCnt];
		int iSum = 0;
		while(iNo != 0)
		{
	            iDigit = iNo % 10;
			iSum = iSum + iDigit;
			iNo = iNo / 10;

		}

		
		printf("%d  ", iSum);
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

	DigitsSum(ptr, iSize);


	free(ptr);

	return 0;
}