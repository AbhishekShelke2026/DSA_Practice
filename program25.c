// Full Code

#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
    struct node *prev;      //$

};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

void Display(PNODE First)
{
    printf("\n NULL<=>");

    while(First != NULL)
    {
        printf("| %d |<=>",First -> data);

        First = First -> next;
    }

    printf("NULL\n");
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

        (*First) -> prev = newn;

        *First = newn;
    }


}


void InsertLast(PPNODE First ,int No)
{
    PNODE newn = NULL;
    PNODE temp = NULL;

    newn = (PNODE) malloc (sizeof(NODE));

    newn -> data = No;
    newn -> next = NULL;
    newn -> prev = NULL;    //$

    if(*First == NULL)
    {
        *First = newn;
    }

    else
    {
        temp = *First;

        while(temp -> next != NULL)
        {
            temp = temp -> next;
        }

        temp -> next = newn;

        temp -> prev = temp;    //$
    }


}


void DeleteFirst(PPNODE First)
{
    if(*First == NULL)
    {
        printf("unable to delete node as LL is empty\n");

        return ;
    }

    else if((*First) -> next == NULL)
    {
        free(*First);

        *First = NULL;
    }

    else
    {
        *First = (*First) -> next;

        free((*First) -> prev);

        (*First) -> prev = NULL;
    }


}


void DeleteLast(PPNODE First)
{
    PNODE temp = NULL;

    if(*First == NULL)
    {
        printf("unable to delete the node as LL is empty\n");

        return;
    }

    else if((*First) -> next == NULL)
    {
        free (*First);

        *First = NULL;
    }

    else
    {
        temp = *First;

        while(temp -> next -> next != NULL)
        {
            temp = temp -> next;
        }

        free(temp -> next);

        temp -> next = NULL;
    }


}


void InsertAtPos(PPNODE First , int No , int iPos)
{
    PNODE newn = NULL;
    PNODE temp = NULL;
    int iLength = 0;
    int i = 0;

    iLength = Count(*First);

    if((iPos < 1) || (iPos > iLength + 1))
    {
        printf("Invalid Postion\n");

        return;
    }

    else if(iPos == 1)
    {
        InsertFirst(First , No);
    }

    else if(iPos == iLength + 1)
    {
        InsertLast(First , No);
    }

    else
    {
        newn = (PNODE) malloc (sizeof(NODE));

        newn -> data = No;
        newn -> next = NULL;
        newn -> prev = NULL;

        temp = *First;

        for(i = 1; i < iPos -1; i++)
        {
            temp = temp -> next;
        }

        temp -> next = newn -> next;

        temp -> next -> prev = newn;

        temp -> next = newn;

        newn -> prev = temp;
    }


}


void DeleteAtPos(PPNODE First , int iPos)
{
    PNODE temp = NULL;
    int iLength = 0;
    int  i =  0;

    iLength = Count(*First);

    if((iPos < 1) || (iPos > iLength + 1))
    {
        printf("invalid Pos\n");
    }

    else if(iPos == 1)
    {
        DeleteFirst(First);
    }

    else if(iPos == iLength)
    {
        DeleteLast(First);
    }

    else
    {
        temp = *First;

        for(i = 1; i < iPos -1 ; i++)
        {
            temp = temp -> next;
        }

       temp -> next = temp -> next -> next;

       free(temp -> next -> prev);

       temp -> next -> prev = temp;
    }


}




int main()
{
    PNODE Head = NULL;
    int iRet = 0;

    InsertFirst(&Head , 101);
    InsertFirst(&Head , 51);
    InsertFirst(&Head , 11);

    InsertLast(&Head , 21);
    InsertLast(&Head , 151);
    InsertLast(&Head , 119);

    Display(Head);
    iRet = Count(Head);
    printf("Number of elements in LL are %d\n",iRet);


    DeleteFirst(&Head);

    Display(Head);
    iRet = Count(Head);
    printf("Number of elements in LL are %d\n",iRet);


    DeleteLast(&Head);

    Display(Head);
    iRet = Count(Head);
    printf("Number of elements in LL are %d\n",iRet);


    InsertAtPos(&Head , 200 , 5);

    Display(Head);
    iRet = Count(Head);
    printf("Number of elements in LL are %d\n",iRet);


    DeleteAtPos(&Head , 5);

    Display(Head);
    iRet = Count(Head);
    printf("Number of elements in LL are %d\n",iRet);

    return 0;
}