// Accept N number from user and return minimum no.
// INPUT:	N:	6
//	  	Elements: 85   11   3   80   93 
//OUTPUT:   3

#include<stdio.h>
#include<stdlib.h>

int Maximum(int Arr[], int iLength)
{
	int iCnt = 0, iMax = 0, iMin = Arr[0];

	for(iCnt = 0; iCnt < iLength; iCnt++)
	{
		if(iMin > Arr[iCnt])
		{	 
			iMin = Arr[iCnt];
		}
		else if(iMax < Arr[iCnt])
		{
			iMax = Arr[iCnt];
		}
		
	} 

	return iMax - iMin;



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


	iRet = Maximum(ptr, iSize);
	
	printf("Difference Is : %d ",iRet);


	free(ptr);

	return 0;
}