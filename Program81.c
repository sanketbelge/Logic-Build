//First occurance

#include<stdio.h>
#include<stdlib.h>

#define TRUE 1;
#define FALSE 0;

typedef int BOOL;

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

void InsertLast(PPNODE head, int no)
{
    PNODE newn = NULL;
    PNODE temp = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = no;
    newn->next = NULL;

    if(*head == NULL)
    *head = newn;

    else
    {
        temp = *head;

        while(temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newn;
        
    }
}

int SearchFirstOcc(PNODE head,int iValue)
{
    int iCnt = 0, size = 0;

    size = Count(head);

    for(iCnt = 1; iCnt<=size; iCnt++)
    {
        if(iValue == head->data)
        break;

        head = head->next;
    }

    if(iCnt > size)
    return -1;
    else
    return iCnt;
}


int main()
{
    int iRet = 0, ret = 0, iNo = 0;
 
    PNODE first = NULL;

    InsertFirst(&first,101);
    InsertFirst(&first,51);
    InsertFirst(&first,21);
    InsertFirst(&first,51);
    InsertFirst(&first,11);


    Display(first);

    iRet = Count(first);
    printf("Number of nodes are : %d\n",iRet);

    InsertLast(&first,111);
    InsertLast(&first,121);

    Display(first);

    iRet = Count(first);
    printf("Number of nodes are : %d\n",iRet);
    
    printf("Enter a number\n");
    scanf("%d",&iNo);

    ret = SearchFirstOcc(first,iNo);
    if(ret == -1)
    printf("Element not found");
    else
    printf("Position of element : %d",ret); 

    return 0;
}