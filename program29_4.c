/*
 Input linked list : 110  230  30  240 

 output : 240 

*/

#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node*next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void InsertFirst(PPNODE First , int no)
{
  PNODE newn = (PNODE)malloc(sizeof(NODE));
  newn->next = NULL;
  newn->data = no;

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
        printf(" | %d |->",First->data);
        First=First->next;
    }printf("NULL\n");
}

int  SecMaximum(PNODE First)
{
      int iMax=0;
   int iTemp=0;
   PNODE iptr1 =First;
   PNODE iptr2=First->next;

   while(iptr1!=NULL)
   {
    iptr2=iptr1->next;
     iMax=iptr1->data;
     while(iptr2!=NULL)
     {
        if(iMax<iptr2->data)
        {
            iTemp = iptr1->data;
            iptr1->data = iptr2->data;
            iptr2->data = iTemp;
        }
        iptr2=iptr2->next;
     }
     iptr1 = iptr1->next;

   }
   return First->next->data;


    
}


int main()
{
 PNODE Head = NULL;
 int iRet =0;

 InsertFirst(&Head , 110);
 InsertFirst(&Head ,230);
 InsertFirst(&Head , 200);
 InsertFirst(&Head , 240);
 InsertFirst(&Head , 640);
 

 Display(Head);

 iRet =SecMaximum(Head);
 printf("%d",iRet);
 

    return 0;
}