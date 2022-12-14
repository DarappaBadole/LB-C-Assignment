/*
 Input linked list : 110  230  20  240  640

 output :  2   5  2  6  10

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

void SumDigit(PNODE First)
{
    int iCnt=0;
    int iDigit = 0;
    int iSum = 0;
    int  iTemp;

    while(First!=NULL)
    { 
        iSum = 0;
        
        while(First->data!=0)
        {
          iDigit = First->data % 10;
          iSum = iSum + iDigit;
          First->data = First->data/10;

        }
        First= First->next;
        printf("%d\t",iSum);

        
        
    }
    
}


int main()
{
 PNODE Head = NULL;

 InsertFirst(&Head , 640);
 InsertFirst(&Head , 240);
 InsertFirst(&Head , 20);
 InsertFirst(&Head , 230);
 InsertFirst(&Head , 110);
 

 Display(Head);

 SumDigit(Head);


    return 0;
}