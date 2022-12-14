/*
  write a program which search first occurence of particular
  elements from singly linear linked list

  input  linked list: 10  20  30  40  50  60  70
  
  input elements :  30
  output :  3

*/


#include<stdio.h>
#include<stdlib.h>
#pragma pack(1)

struct node
{
    int data;
    struct node *next;

};

typedef struct node NODE;
typedef struct node *PNODE;
typedef struct node ** PPNODE;

void InsertFirst(PPNODE First,int no)
{
    PNODE newn = (PNODE)malloc(sizeof(NODE));
    newn->next = NULL;
    newn->data =no;

    if(*First==NULL)
    {
        *First=newn;
    }

    else
    {
        newn->next = *First;
        *First = newn;
    }
}

void Display(PNODE First)
{
    printf("Elements of linked list are:\n");
    
    while(First!=NULL)
    {
       printf("| %d |->",First->data);
       First  = First->next;
    }
    printf("NULL\n");
}

int SearchLastOcc(PNODE First , int no)
{
    int iCnt = 1;
    int Occ=0;
    while(First!=NULL)
    {
        if(First->data==no)
        {
              Occ = iCnt;
             
        }
        iCnt++;


        
        First  = First->next;
    }
    return Occ;



}



int main()
{
 PNODE Head = NULL;
 int iRet =0;

 InsertFirst(&Head,70);
 InsertFirst(&Head,30);
 InsertFirst(&Head,50);
 InsertFirst(&Head,40);
 InsertFirst(&Head,30);
 InsertFirst(&Head,20);
 InsertFirst(&Head,10);

 Display(Head);


 iRet = SearchLastOcc(Head ,30 );
 printf(" last occurance is :%d",iRet);














    return 0;

}