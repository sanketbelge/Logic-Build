// Accept N number from user and accept range, display all elements from that range
// INPUT:	N:	6
//		start:   60
//		end:	   90
//    	Elements: 85   66   3   80   93 
//OUTPUT:   1(4-3)

#include<stdio.h>
#include<stdlib.h>

void Range(int Arr[], int iLength, int iNo1, int iNo2)
{
	int iCnt = 0;

	printf("Elements : ");

	for(iCnt = 0; iCnt < iLength; iCnt++)
	{
		if(Arr[iCnt]  > iNo1  && Arr[iCnt]  < iNo2)
		{
			printf("%d ", Arr[iCnt]);
		}
		
	} 

}

int main()
{
	int iCnt = 0, *ptr = NULL, iSize = 0, iFirst = 0, iEnd = 0;

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

	printf("Enter First No : \n");
	scanf("%d", &iFirst);
	printf("Enter End No : \n");
	scanf("%d", &iEnd);

	Range(ptr, iSize, iFirst, iEnd);

	free(ptr);

	return 0;
}