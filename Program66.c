

void Display(int iRow, int iColumn)
{
	int iCntRows = 0;
	int iCntCols = 0;
	int iCnt = 1;

	for(iCntRows = 1; iCntRows <= iRow; iCntRows++)
	{
		for(iCntCols = 1; iCntCols <= iColumn; iCntCols++, iCnt++)
		{
			if(iCnt > 9)
			{
				iCnt = 1;
			}
			printf("%d\t", iCnt);	 
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