/*
  write a program which sum of particular
  elements from singly linear linked list

  input  linked list: 10  20  30  40  
  
  
  output :  100

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

int Addition(PNODE First)
{
    int iSum = 0;
    while(First!=NULL)
    {
        iSum = iSum+First->data;
        
    
      First = First->next;
    }
    return iSum;
    
   

}



int main()
{
 PNODE Head = NULL;
 int iRet =0;

 
 InsertFirst(&Head,40);
 InsertFirst(&Head,30);
 InsertFirst(&Head,20);
 InsertFirst(&Head,10);

 Display(Head);


 iRet = Addition(Head);
 printf("%d",iRet);














    return 0;

}