/*
 Input linked list : 11  28  17  41  6  89

 output : 6  28  

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

int  AdditionEven(PNODE First)
{
    int iCnt=0;
    int iDigit = 0;
    int iSum = 0;
    int  iTemp;

    while(First!=NULL)
    { 
        iTemp = First->data;

        if(First->data%2==0)
        {
            iSum = iSum+First->data;
        }
        First= First->next;
        
    }
    
    return iSum;
}


int main()
{
 PNODE Head = NULL;
 int iRet=0;

 InsertFirst(&Head , 11);
 InsertFirst(&Head , 20);
 InsertFirst(&Head , 32);
 InsertFirst(&Head , 41);
 

 Display(Head);

 iRet = AdditionEven(Head);
 printf("%d",iRet);

    return 0;
}