/*
 Accept number from user and display all such numbers  which 
 contains 3 digit in it.

  input : N : 6
         Elements : 8225  665  3  76  953   858

   output :  665 953  858

*/
#include<stdio.h>
#include<stdlib.h>

 void Digits(int Arr[],int iLength)
{
    int iCnt = 0 ; 
    int iDigit = 0;
    int iCount = 0;
   
   for(iCnt=0;iCnt<iLength;iCnt++)
   {
  while(Arr[iCnt]!=0)
  {
    iDigit = Arr[iCnt] % 10;
    Arr[iCnt] /10;
   
    iCnt++;
      iDigit++;
    
  
   
 

    if(iDigit==3)
       {
        printf("%d",Arr[iCnt]);
    }
    else
    {
      break;
    }
  }
   }
   printf("\n");
    
   
}
int main()
{

     int iSize = 0;
     int i= 0;
     int iRet = 0;
     int *ptr = NULL;

     printf("Enter number of elements:");
     scanf("%d",&iSize);

     ptr=(int *)malloc(iSize* sizeof(int));
     if(ptr==NULL)
     {
        printf("unable to alocate memory\n");
        return -1;

     }

      printf("Enter the elememnts\n");
     

        for(i=0;i<iSize;i++)
        {
            scanf("%d",&ptr[i]);
        }

      Digits(ptr,iSize);
      

      free(ptr);




    return 0;
}