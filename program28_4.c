/*
  write a program which search first occurence of particular
  elements from singly linear linked list

  input  linked list: 110  230  320  240
  
  
  output :  320

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

int Maximum(PNODE First , int no)
{
    int max=First->data;
    while(First!=NULL)
    {
        
        if(First->data>max)
        {
            max = First->data;
        }
    
        First  = First->next;
    }
    return max;



}



int main()
{
 PNODE Head = NULL;
 int iRet =0;

 InsertFirst(&Head,240);
 InsertFirst(&Head,320);
 InsertFirst(&Head,230);
 InsertFirst(&Head,110);
 
 Display(Head);


 iRet = Maximum(Head ,30 );
 printf("%d",iRet);














    return 0;

}