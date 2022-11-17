// Accept N number from user and return product of all elements.
// INPUT:	N:	6
//	  	Elements: 85   11   3   80   93 
//OUTPUT:   45

#include<stdio.h>
#include<stdlib.h>

int Frequency(int Arr[], int iLength)
{
	int iCnt = 0, iProduct = 0;

	for(iCnt = 0; iCnt < iLength; iCnt++)
	{
		if(Arr[iCnt]  % 2 != 0)
		{	
			iProduct = iProduct * Arr[iCnt];
		}
		
	} 

	if(iProduct == 1)
	{
		return 0;
	}
	else
	{
		return iProduct;
	}

}

int main()
{
	int iCnt = 0, *ptr = NULL, iSize = 0, iRet = 0, iValue = 0;

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


	iRet = Frequency(ptr, iSize);
	
	printf("Product Is : %d ",iRet);


	free(ptr);

	return 0;
}