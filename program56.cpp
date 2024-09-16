// SindlyCircular in C++
//387
// delete che operation baki


#include<iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;


class SinglyCL
{
    private:
        PNODE First;
        PNODE Last;
        int iCount;

    public:
        SinglyCL();

        void Display();
        int Count();

        void InsertFirst(int No);
        void InsertLast(int No);
        void InsertAtPos(int No , int iPos);

        void DleteFirst();
        void DeleteLast();
        void DeleteAtPos(int iPos);
};

SinglyCL :: SinglyCL()
{
    First = NULL;
    Last = NULL;
    iCount = 0;
}


void SinglyCL :: Display()
{
    if((First == NULL) && (Last == NULL))
    {
        return;
    }

    do
    {
        cout<<"|"<<First -> data <<"|->";
    }while(First != Last ->  next);

    cout<<"\n";


}

int SinglyCL :: Count()
{
    int iCount = 0;

    if((First == NULL) && (Last == NULL))
    {
        return 0;
    }

    do
    {
        iCount++;
        First = First -> next;
    }while(First != Last -> next);

    return iCount;
}

void SinglyCL :: InsertFirst(int No)
{
    PNODE newn = NULL;

    newn = new NODE;

    newn -> data = No;
    newn -> next = NULL;

    if(First == NULL)
    {
        newn  = First;
    }

    else
    {
        newn -> next = First;

        First = newn;
    }

    Last -> next = First;

}

void SinglyCL :: InsertLast(int No)
{
    PNODE newn = NULL;

    newn = new NODE;

    newn -> data = No;
    newn -> next = NULL;

    if((First == NULL) && (Last == NULL))
    {
        First  = newn;
        Last  = newn;
    }

    else
    {
        Last -> next = newn;
        Last = newn;
    }

    Last -> next = newn;
}

void SinglyCL :: InsertAtPos(int No , int iPos)
{
    PNODE newn = NULL;
    PNODE temp = NULL;

    int i = 0;

    if((iPos < 1) || (iPos > iCount + 1))
    {
        cout<<"Invalid positon"<<endl;
        return;
    }

    else if(iPos == 1)
    {
        InsertFirst(No);
    }

    else if(iPos == iCount + 1)
    {
        InsertLast(No);
    }

    else
    {
        temp = First;

        newn = new NODE;

        newn -> data = No;
        newn -> next = NULL;

        for(i = 1; i < iPos - 1; i++)
        {
            temp = temp -> next;
        }

        newn -> next = temp -> next;

        temp -> next = newn;
    }
}

void SinglyCL :: DleteFirst()
{
    if((First == NULL) && (Last == NULL))
    {
        return;
    }

    else if(First == NULL)
    {
        delete(First);
        First = NULL;
        Last = NULL;
    }

    else
    {
        First = First -> next;
        delete(Last -> next);
        Last -> next = NULL;
    }
}


void SinglyCL :: DeleteLast()
{
    PNODE temp = NULL;

    if((First == NULL) && (Last == NULL))
    {
        return;
    }

    else if(First == NULL)
    {
        delete(First);
        First = NULL;
        Last = NULL;
    }

    else
    {
        temp = First;

        while(temp -> next -> next != NULL)
        {
            temp = temp -> next;
        }

        delete(Last);

        temp = Last;

        Last -> next = First;
    }
}

void SinglyCL :: DeleteAtPos(int iPos)
{
    int i = 0;

    PNODE temp1 = NULL;
    PNODE temp2 = NULL;

    if((iPos < 1) || (iPos < iCount))
    {
        printf("Invalid position\n");

        return;
    }

    if(iPos == 1)
    {
        DleteFirst();
    }

    if(iPos == iCount + 1)
    {
        DeleteLast();
    }

    else
    {
        temp1 = First;

        for(i = 1; i < iPos - 1; i++)
        {
            temp1 = temp1 -> next;
        }

        temp2 = temp1 -> next;

        temp1 -> next = temp2 -> next;

        delete(temp2);
    }
}



int main()
{
    SinglyCL obj;
    int iRet = 0;

    obj.InsertFirst(51);
    obj.InsertFirst(21);
    obj.InsertFirst(11);

    obj.Display();
    iRet = obj.Count();
    cout<<"No. of element in LL are" <<iRet<<endl;


    obj.InsertLast(101);
    obj.InsertLast(121);
    obj.InsertLast(151);

    obj.Display();
    iRet = obj.Count();
    cout<<"No. of element in LL are" <<iRet<<endl;

    obj.InsertAtPos(201 , 5);

    obj.Display();
    iRet = obj.Count();
    cout<<"No. of element in LL are" <<iRet<<endl;


    obj.DleteFirst();
    obj.Display();
    iRet = obj.Count();
    cout<<"No. of element in LL are" <<iRet<<endl;

    obj.DeleteLast();
    obj.Display();
    iRet = obj.Count();
    cout<<"No. of element in LL are" <<iRet<<endl;


    obj.DeleteAtPos(2);
    obj.Display();
    iRet = obj.Count();
    cout<<"No. of element in LL are" <<iRet<<endl;




    return 0;
}