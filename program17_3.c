/*
  Accept number from user and return the difference between
  largest number and smallest number

  input : N : 6
         Elements : 85 66 3  66  93 88

   output : 90

*/
#include<stdio.h>
#include<stdlib.h>

int Diff(int Arr[],int iLength)
{
    int iCnt = 0 ; 
    int iMin=Arr[0];
    int iMax=Arr[0];
   
    
    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        if(Arr[iCnt]<iMin)
        {
            iMin = Arr[iCnt];
        }
        else
        { 
            if(Arr[iCnt]>iMax)
            { 
             iMax = Arr[iCnt];
            }
        }
    }

    return iMax-iMin;
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

      iRet=Diff(ptr,iSize);
      printf("difference  is:%d",iRet);

      free(ptr);




    return 0;
}