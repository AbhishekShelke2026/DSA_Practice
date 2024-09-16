//365
//SinglyLL 

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

class SinglyLL
{
    public:
        PNODE First;
        int iCount;

        SinglyLL();
    
        void Display();
        int Count();

        void InsertFirst(int No);
        void InsertLast(int No);
        void InsertAtPos(int No , int iPos);

        void DeleteFirst();
        void DeleteLast();
        void DeleteAtPos(int iPos);

};

SinglyLL :: SinglyLL()
{
    cout<<"Inside constructor"<<endl;
    First = NULL;
    iCount = 0;
}

void SinglyLL :: Display()
{

}


int SinglyLL :: Count()
{
    return iCount;
}


void SinglyLL :: InsertFirst(int No)
{
    PNODE newn = NULL;

    newn = new NODE;    // C++

    //newn = (PNODE)  malloc (sizeof(NODE));    in C

    newn -> data = No;
    newn -> next = NULL;

    if(First == NULL)
    {
        First = newn;
    }

    else
    {
        newn -> next = First;
        First = newn;
    }

    iCount++;


}


void SinglyLL :: InsertLast(int No)
{


}


void SinglyLL :: InsertAtPos(int No , int iPOs)
{


}


void SinglyLL :: DeleteFirst()
{


}


void SinglyLL :: DeleteLast()
{


}


void SinglyLL :: DeleteAtPos(int iPos)
{

}



int main()
{
    SinglyLL obj;
    int iRet = 0;

    obj.InsertFirst(51);
    obj.InsertFirst(21);
    obj.InsertFirst(11);

    iRet = obj.Count();
    cout<<"Number of element in LL are "<<iRet<<endl;





    return 0;
}