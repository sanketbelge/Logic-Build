		 
#include<stdio.h>

void Display(int iRow, int iColumn)
{
	int iCntRows = 0;
	int iCntCols = 0;
	int iCnt = 1;
	char ch = '\0';

	for(iCntRows = 1; iCntRows <= iRow; iCntRows++)
	{

		for(iCntCols = 1, iCnt = 1, ch = 'a'; iCntCols <= iColumn; iCntCols++, iCnt++, ch++)
		{
			if(iCntRows % 2 != 0)
			{
				printf("%d\t", iCnt);
			}
			else
			{
				printf("%c\t", ch);
			}

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