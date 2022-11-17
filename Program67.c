#include<stdio.h>

void Display(int iRow, int iColumn)
{
	int iCntRows = 0;
	int iCntCols = 0;
	int iCnt = 0;

	for(iCntRows = 1; iCntRows <= iRow; iCntRows++)
	{
			if(iCntRows % 2 != 0)
			{
				iCnt = 2;
			}
			else
			{
				iCnt = 1;
			}

		for(iCntCols = 1; iCntCols <= iColumn; iCntCols++)
		{
			printf("%d\t", iCnt);
			iCnt = iCnt + 2;	
		}

		printf("\n");
	}	
}

int main()
{

	int iValue1 = 0;
	int iValue2 = 0;

	printf("Enter The Value Of Rows : \n");
	scanf("%d", &iValue1);

	printf("Enter The Value Of Cols : \n");
	scanf("%d", &iValue2);

	Display(iValue1, iValue2);

	return 0;
}