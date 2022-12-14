//Accept number from user check whether that number contains 11 in it or not

/* Accept N number from user and return frequency of even number
 
 Input : N  : 6

        Elements: 85  66  3  80  93  88

 Output:  3


*/

#include<stdio.h>
#include<stdlib.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL Check(int Arr[],int iLength)
 {
    int iCnt = 0  ,iCheckCnt = 0;

    for(iCnt = 0; iCnt<iLength;iCnt++)
    {
        if(Arr[iCnt]==11)
        {
             iCheckCnt++;
             break;

        }
    }
    if(iCheckCnt==1)
    {
        return TRUE;
    }
    else
    {
        return FALSE;

    }

 
 }

int main()
{
 int i = 0, iSize = 0;
 int *ptr = NULL , iRet = 0;
 BOOL bRet = FALSE;


 printf("Enter Number of elements\n");
 scanf("%d",&iSize);

 ptr = (int *)malloc(iSize*sizeof(int));

 printf("Enter the elements:\n");

 for(i=0;i<iSize;i++)
 {
    scanf("%d",&ptr[i]);
 }
 iRet = Check(ptr,iSize);

 if(iRet==TRUE)
 {
    printf("11 is present\n");

 }

 else
 {
    printf("11 is not present\n");
 }



 free(ptr);






    return 0;
}
