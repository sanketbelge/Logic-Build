// prog to add which addition of all element singly LL

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

int Addition(PNODE head)
{
    int  iSum= 0;


    while(head != NULL)
    {
        iSum = iSum + head->data;

        head = head->next;
    }

    
    return iSum;
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

    ret = Addition(first);

    printf("Addition of elements in linked list : %d",ret); 

    return 0;
}