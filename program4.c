//334

#include<stdio.h>

struct node
{
    int Data;
    struct node *next;

};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

int main()
{
    PNODE Head = NULL;

    NODE obj1;
    NODE obj2;
    NODE obj3;

    obj1.next = 11;
    obj1.next = &obj2;

    obj2.next = 21;
    obj2.next = &obj3;

    obj3.next = 51;
    obj3.next = NULL;

    Head = &obj1;

    printf("Head : %d\n",Head);
    printf("&obj1 : %d\n",&obj1);
    printf("&obj2 : %d\n",&obj2);
    printf("&obj3 : %d\n",&obj3);

    printf("Head -> data : %d\n",Head -> Data);
    printf("Head -> Data : %d\n",Head -> next);
    printf("Head -> next -> next : %d\n",Head -> next -> next);
    printf("Head -> next -> next -> next : %d\n", Head -> next -> next -> next);

    printf("Head -> next -> Data : %d\n", Head -> next -> Data);
    printf("Head -> next -> next -> Data : %d\n", Head -> next -> next -> Data);




    return 0;
}