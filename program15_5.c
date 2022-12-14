

#include<stdio.h>
#include<stdlib.h>

 int CountEven(int Arr[],int iLength, int iNumber)
 {
    int iCnt = 0 ,iFreq = 0 ,iOddCnt = 0;


    for(iCnt = 0; iCnt<iLength;iCnt++)
    {
        if(Arr[iCnt]==iNumber)
        {
            iFreq++;
            
        }
        
    }

    return  iFreq;
 }

int main()
{
 int i = 0, iSize = 0;
 int *ptr = NULL , iRet = 0;
 int iNo = 0;


 printf("Enter Number of elements\n");
 scanf("%d",&iSize);

 ptr = (int *)malloc(iSize*sizeof(int));

 printf("Enter the elements:\n");

 for(i=0;i<iSize;i++)
 {
    scanf("%d",&ptr[i]);
 }

 printf("Enter the number that you want to check\n");
 scanf("%d",&iNo);

 iRet = CountEven(ptr,iSize,iNo);


 printf("Result is:%d",iRet);

 free(ptr);






    return 0;
}
