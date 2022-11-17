// Accept N number from user and accept one another one another number as NO, return index of last occurence of that no
// INPUT:	N:	6
//		No:   66
//    	Elements: 85   66   3   66   93  88
//OUTPUT:   3

#include<stdio.h>
#include<stdlib.h>

int LastOcc(int Arr[], int iLength, int iValue)
{
	int iCnt = 0, iCountValue = 0, iLastIndex = 0;

	for(iCnt = iLength; iCnt > 0; iCnt--)
	{
		if(Arr[iCnt]  == iValue)
		{
			iLastIndex = iCnt;
			break;
		}
		
	} 

	if(iCnt == 0)
	{
		return -1;
	}
	else
	{
		return iLastIndex;
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

	printf("Enter No You Want Serach Frequency : \n");
	scanf("%d", &iValue);

	iRet = LastOcc(ptr, iSize, iValue);
	
	if(iRet == -1)
	{
		printf("%d is Not Present!!",iValue);
	}
	else
	{
		printf("%d is Present At Index : %d",iValue, iRet);
	}

	free(ptr);

	return 0;
}