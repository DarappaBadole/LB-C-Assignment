/*
 prime number: 

 Input linked list : 11  20  17  41  22  89

 output : 11  17  41  89

*/

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>


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

void  DisplayPrime(PNODE First)
{
    
    int iCnt1 =0;
    int iCnt = 0;

    while(First!=NULL)
    { 
       iCnt1 = 0;
        for(iCnt=2;iCnt<(First->data);iCnt++)
        {
          if(First->data % iCnt==0)
          {
            
            iCnt1++;
           
          } 
         
        }
        if(iCnt1==0)
          {
            printf("%d\t",First->data);
          }
        
      First = First->next;
        
    }
    
}


int main()
{
 PNODE Head = NULL;

 InsertFirst(&Head , 89);
 InsertFirst(&Head , 22);
 InsertFirst(&Head , 41);
 InsertFirst(&Head , 17);
 InsertFirst(&Head , 20);
 InsertFirst(&Head , 11);

 Display(Head);

 DisplayPrime(Head);


    return 0;
}