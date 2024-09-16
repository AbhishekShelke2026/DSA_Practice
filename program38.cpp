//374
// DoubluLL In C++

#include<iostream>
using namespace std;

struct node 
{
    int data;
    struct node *next;
    struct node *prav;
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

}

int DoublyLL :: Count()
{
    return iCount;
}


void DoublyLL :: InsertFirst(int No)
{

}


void DoublyLL :: InsertLast(int No)
{

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
    



    return 0;
}