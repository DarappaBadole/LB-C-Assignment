//Accept number from user and return difference between summation 
//of even elements and summation of odd elements

#include<stdio.h>
#include<stdlib.h>

int Difference(int Arr[],int iLength)
{
  int iCnt = 0, iEvenSum=0,iOddSum = 0;

   for(iCnt = 0;iCnt<iLength;iCnt++)
   {
      if(Arr[iCnt]%2==0)
      {
        iEvenSum = iEvenSum+Arr[iCnt];
      }

      else
      {
        iOddSum = iOddSum + Arr[iCnt];
      }

   }
   return iEvenSum - iOddSum;
}

int main()
{
  int iSize = 0, iRet = 0;
  int *p = NULL ,  i = 0;


  printf("Enter number of elememts\n");
  scanf("%d",&iSize);

  p  = (int *)malloc(iSize *sizeof(int));
  
  if(p==NULL)
  {
    printf("Unable to allocate memory\n");
    return -1;

  }

  printf("Enter the array of elemets\n");

  for(i= 0 ;i<iSize ; i++)
  {
    scanf("%d",&p[i]);

  }

   iRet = Difference(p,iSize);

   printf("The differrnce is %d :",iRet);

   free(p);

    return 0;

}