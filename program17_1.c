/*
  Accept number from user and return the lagrgest number

  input : N : 6
         Elements : 85 66 3  66  93 88

   output : 93

*/
#include<stdio.h>
#include<stdlib.h>

int Maximum(int Arr[],int iLength)
{
    int iCnt = 0 ; 
    int iMax=Arr[0];
    
    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        if(Arr[iCnt]>iMax)
        {
            iMax = Arr[iCnt];
        }
    }

    return iMax;
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

      iRet=Maximum(ptr,iSize);
      printf("Largest number is:%d",iRet);

      free(ptr);




    return 0;
}