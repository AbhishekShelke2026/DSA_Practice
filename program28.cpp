//363
// SinglyLL 

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

        void Displlay();
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
    cout<<"inside Constructor\n";
    First = NULL;
    iCount = 0;
}

int main()
{
    SinglyLL obj;

    cout<<"Jay Ganesh...";
    return 0;
}
