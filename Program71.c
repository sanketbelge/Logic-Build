
#include<stdio.h>

void Display(int iRow, int iCol)
{
    int i = 0, j = 0;

    for(i = 1;i <= iRow; i++)     
    {
        //     1        2       3
        for (j = 1; j <= i; j++) 
        {
            printf("*\t");

        }
        printf("\n");
    }

}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    printf("please enter number of rows :\n");
    scanf("%d",&iValue1);

    printf("please enter number of columns :\n");
    scanf("%d",&iValue2);

    Display(iValue1,iValue2);

    return 0;
}