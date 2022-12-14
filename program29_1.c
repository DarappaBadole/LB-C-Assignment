/*
 Input linked list : 11  20  32  41

 output : 52 

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

void DisplayPerfect(PNODE First)
{
    int iCnt=0;
    int iDigit = 0;
    int iSum = 0;
    int  iTemp;

    while(First!=NULL)
    { 
        iTemp = First->data;

        for(iCnt=1;iCnt<First->data;iCnt++)
        {
          if(First->data % iCnt==0)
          {
               iSum = iSum+iCnt;
          }

        }
        if(iSum==iTemp)
        {
        printf("%d\t",iSum);
        }
        iSum =0;
        First = First->next;
        
    }
    
}


int main()
{
 PNODE Head = NULL;

 InsertFirst(&Head , 89);
 InsertFirst(&Head , 6);
 InsertFirst(&Head , 41);
 InsertFirst(&Head , 17);
 InsertFirst(&Head , 28);
 InsertFirst(&Head , 11);

 Display(Head);

 DisplayPerfect(Head);


    return 0;
}