//341

#include<stdio.h>

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

void Display(PNODE First)
{
    while(First != NULL)
    {
        printf("%d\t",First -> data);

        First = First -> next;
    }
}

int Count(PNODE First)
{
    int iCnt  = 0;

    while(First != NULL)
    {
        iCnt ++;
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

    Display(Head);

    iRet = Count(Head);

    printf("\nNumers of element in LL Are %d\n",iRet);



    return 0;
}