//374
// DoubluLL In C++

#include<iostream>
using namespace std;

struct node 
{
    int data;
    struct node *next;
    struct node *prev;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

class DoublyLL
{
    private:
        PNODE First;
        int iCount;

    public:
        DoublyLL();

        void Display();
        int Count();

        void InsertFirst(int No);
        void InsertLast(int No);
        void InsertAtPos(int No , int iPos);

        void DeleteFirst();
        void DeleteLast();
        void DeleteAtPos(int iPos);


};

DoublyLL :: DoublyLL()
{
    cout<<"Inside Constructor\n";
    First = NULL;
    iCount = 0;
}


void DoublyLL :: Display()
{
    PNODE temp = First;

    cout<<"\n NULL<=>";

    while(temp != NULL)
    {
        cout<<"|"<<temp -> data<<"|<=>";

        temp = temp -> next;

    }

    cout<<"NULL\n";
}

int DoublyLL :: Count()
{
    return iCount;
}


void DoublyLL :: InsertFirst(int No)
{
    PNODE newn = NULL;

    newn = new NODE;

    newn -> data = No;
    newn -> next = NULL;
    newn -> prev = NULL;

    if(First == NULL)
    {
        First = newn;
    }

    else
    {
        newn -> next = First;

        First -> prev = newn;

        First = newn;
    }

    iCount++;
}


void DoublyLL :: InsertLast(int No)
{
    PNODE temp = NULL;
    PNODE newn = NULL;

    newn = new NODE;

    newn -> data = No;
    newn -> next = NULL;
    newn -> prev = NULL;

    if(First == NULL)
    {
        First = newn;
    }

    else
    {
        temp = First;

        while(temp -> next != NULL)
        {
            temp = temp -> next;
        }

        temp -> next = newn;

        newn -> prev = temp;
    }

    iCount++;
}    


void DoublyLL :: InsertAtPos(int No , int iPos)
{

}


void DoublyLL :: DeleteFirst()
{

}


void DoublyLL :: DeleteLast()
{

}


void DoublyLL :: DeleteAtPos(int iPos)
{

}




int main()
{
    DoublyLL obj;
    int iRet = 0;

    obj.InsertFirst(51);
    obj.InsertFirst(21);
    obj.InsertFirst(11);

    obj.Display();
    iRet = obj.Count();
    cout<<"Number of elements in LL are"<<iRet;


    obj.InsertLast(101);
    obj.InsertLast(111);
    obj.InsertLast(121);

    obj.Display();
    iRet = obj.Count();
    cout<<"Number of elements in LL are"<<iRet;

    



    return 0;
}