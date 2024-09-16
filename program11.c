//344

#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;

};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

void InsertFirst(PPNODE First , int No)
{
    PNODE newn = NULL;

    newn = (PNODE) malloc (sizeof(NODE));

    newn -> data = No;
    newn -> next = NULL;

    if(*First == NULL)
    {
        *First = newn;
    }

    else
    {
        newn -> next = *First;
        *First = newn;
    }
}

void InsertLast(PPNODE First , int No)
{
    PNODE newn = NULL;
    PNODE temp = NULL;

    newn = (PNODE) malloc (sizeof(NODE));

    newn -> data = No;
    newn -> next = NULL;

    if(*First == NULL)
    {
        newn = *First;
    }

    else
    {
        temp = *First;

        while (temp -> next != NULL)
        {
            temp = temp -> next;
        }
    }
    temp -> next = newn;
}

void DeleteFirst(PPNODE First)
{
    PNODE temp = NULL;

    if(*First == NULL)
    {
        printf("Unable to delete the node as LL is empty\n");

        return;
    }

    else if((*First) -> next == NULL)
    {
        free(*First);

        *First = NULL;
    }

    else
    {
        temp = *First;

        *First = (*First) -> next;

        free(temp);
    }
}


void Display(PNODE First)
{
    while(First != NULL)
    {
        printf("| %d |->",First -> data);

        First = First -> next;
    }
}

int Count(PNODE First)
{
    int iCnt = 0;

    while(First != NULL)
    {
        iCnt++;

        First = First -> next;
    }

    return iCnt;
}

int main()
{
    PNODE Head = NULL;
    int iRet = 0;

    InsertFirst(&Head , 101);
    InsertFirst(&Head , 51);
    InsertFirst(&Head , 21);
    InsertFirst(&Head , 11);

    InsertLast(&Head , 111);
    InsertLast(&Head , 121);
    InsertLast(&Head , 151);
    InsertLast(&Head , 161);

    Display(Head);

    iRet = Count(Head);
    printf("\nNo. of element in the LL Are %d\n",iRet);


    DeleteFirst(&Head);

    Display(Head);

    iRet = Count(Head);
    printf("\nNo. of element in the LL Are %d\n",iRet);





    return 0;
}