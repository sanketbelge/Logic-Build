//prog to display largest digit of each element in LL

#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node* next;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

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
    printf("Nodes of linked list : \n");

    while(head != NULL)
    {
        printf("| %d |->",head->data);
        head = head->next;
    }
    printf("NULL\n");
}

void DisplaySmallestDigit(PNODE head)
{
    
    int iMin = 9, iDigit = 0;
    
  
    while(head != NULL)
    {
     
        while(head->data != 0)
        {
    
            iDigit = (head->data) % 10;
            if(iDigit < iMin)
            iMin = iDigit;
            head->data = (head->data) / 10;
        }
        printf("%d\t",iMin);
        iMin = 9;
       
        head = head->next;
    }
  
}

int main()
{
    PNODE first = NULL;

    InsertFirst(&first,101);
    InsertFirst(&first,52);
    InsertFirst(&first,28);
    InsertFirst(&first,11);

    Display(first);

    DisplaySmallestDigit(first);

    return 0;
}