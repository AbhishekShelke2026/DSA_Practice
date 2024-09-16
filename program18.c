//354

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

}


int Count(PNODE First)
{

    return 0;
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


}


void DeleteLast(PPNODE First)
{


}


void InsertAtPos(PPNODE First , int No , int iPos)
{


}


void DeleteAtPos(PPNODE First , int iPos)
{


}




int main()
{
    PNODE Head = NULL;

    InsertFirst(&Head , 101);
    InsertFirst(&Head , 51);
    InsertFirst(&Head , 11);

    InsertLast(&Head , 21);
    InsertLast(&Head , 151);
    InsertLast(&Head , 119);




    return 0;
}