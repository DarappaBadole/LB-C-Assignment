//Accept number from user and return product of all odd element




#include<stdio.h>
#include<stdlib.h>
int Product(int Arr[],int iLength)

{
    int iCnt = 0;
    int iProduct = 1;
    int iGnt = 0;
    for(iCnt=0;iCnt<iLength;iCnt++)
    {
       if(Arr[iCnt]%2==1)
       {
          iGnt++;
          iProduct=iProduct * Arr[iCnt];
       }
       
   
    }
    if(iGnt!=0)
    {
     return iProduct;
    }
    else{
        return
    }
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

      iRet=Product(ptr,iSize);
      printf("product is :%d",iRet);

      free(ptr);




    return 0;
}