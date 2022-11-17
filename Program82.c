//Last occurance of number

#include<stdio.h>
#include<stdlib.h>


struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void InsertFirst(PPNODE head, int no)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = no;
    newn->next = NULL;

    if(*head == NULL)
    *head = newn;

    else
    {
        newn->next = *head;
        *head = newn;
    }
}


void Display(PNODE head)
{

    while(head != NULL)
    {
        printf("| %d |->",head->data);
        head = head->next;
    }
    printf("NULL\n");

}

int Count(PNODE head)
{
    int iCnt = 0;

    while(head != NULL)
    {
        iCnt++;
        head = head->next;
    }
    printf("\n");

    return iCnt;

}

int SearchLastOcc(PNODE head,int iValue)
{
    int iCnt = 0, size = 0, iLastOcc = 0;

    size = Count(head);

    for(iCnt = 1; iCnt<=size; iCnt++)
    {
        if(iValue == head->data)
        iLastOcc = iCnt;

        head = head->next;
    }

    
    return iLastOcc;
}


int main()
{
    int iRet = 0, ret = 0, iNo = 0;
 
    PNODE first = NULL;

    InsertFirst(&first,111);
    InsertFirst(&first,121);
    InsertFirst(&first,101);
    InsertFirst(&first,51);
    InsertFirst(&first,21);
    InsertFirst(&first,51);
    InsertFirst(&first,11);


    Display(first);

    iRet = Count(first);
    printf("Number of nodes are : %d\n",iRet);

    Display(first);

    iRet = Count(first);
    printf("Number of nodes are : %d\n",iRet);
    
    printf("Enter a number\n");
    scanf("%d",&iNo);

    ret = SearchLastOcc(first,iNo);
    if(ret == 0)
    printf("Element not found");
    else
    printf("Last occurance  of element : %d",ret); 

    return 0;
}