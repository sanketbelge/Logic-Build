// Accept N number from user and return ferquency of 11 


#include<stdio.h>
#include<stdlib.h>

int Frequency(int Arr[], int iLength, int iValue)
{
	int iCnt = 0, iCountValue = 0;

	for(iCnt = 0; iCnt < iLength; iCnt++)
	{
		if(Arr[iCnt]  == iValue)
		{
			iCountValue++;
		}
		
	} 

	return iCountValue;

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

	printf("Enter No You Want Serach Frequency : \n");
	scanf("%d", &iValue);

	iRet = Frequency(ptr, iSize, iValue);
	printf("Ferequency : %d  ", iRet);

	free(ptr);

	return 0;
}