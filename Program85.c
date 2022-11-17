//Maximum number

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

int Maximum(PNODE head)
{
    int  iMax = 0;

    iMax = head->data;

    while(head != NULL)
    {
        if( head->data > iMax)
        iMax = head->data;

        head = head->next;
    }

    
    return iMax;
}


int main()
{
    int iRet = 0, ret = 0;
 
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

    ret = Maximum(first);

    printf("Maximum number in linked list : %d",ret); 

    return 0;
}