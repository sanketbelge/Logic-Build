// Accept N number from user and check wheather number cointains 11 in it or not

// INPUT:	N:	6
//    	Elements: 85   66   11   80   93   88
//OUTPUT:   11 is Present

#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL Check(int Arr[], int iLength)
{
	int iCnt = 0, iCountEven = 0, iCountOdd;

	for(iCnt = 0; iCnt < iLength; iCnt++)
	{
		if(Arr[iCnt] == 11)
		{
			break;
		}
	} 

	if(iCnt == iLength)
	{
		return 0;
	}
	else
	{
		return 1;
	}

}

int main()
{
	int iCnt = 0, *ptr = NULL, iSize = 0;
	BOOL bRet = 0;

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

	bRet = Check(ptr, iSize);
	
	if(bRet == TRUE)
	{
		printf("11 is Present!!");
	}
	else
	{
		printf("11 Not Present!!");
	}

	free(ptr);

	return 0;
}