/*
  write a program which search first occurence of particular
  elements from singly linear linked list

  input  linked list: 110  230  20  240  640 
  
  
  output :  20

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

int Minimum(PNODE First)
{
    int  min= First->data;
    
    while(First!=NULL)
    {
        if(First->data<min)
        {
            min = First->data;
        }
        First  = First->next;
    }
    return min;



}



int main()
{
 PNODE Head = NULL;
 int iRet =0;

 InsertFirst(&Head,110);
 InsertFirst(&Head,230);
 InsertFirst(&Head,20);
 InsertFirst(&Head,240);
 InsertFirst(&Head,640);
 

 Display(Head);


 iRet = Minimum(Head);
 printf("%d",iRet);














    return 0;

}