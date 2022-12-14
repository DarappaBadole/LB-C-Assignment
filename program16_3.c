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
int LastOcc(int Arr[],int iLength,int iNumber)
 {
    int iCnt = 0 ;
    int iCheckCnt = 0;
    int iFREQ=-1;
   

    for(iCnt = 0; iCnt<iLength;iCnt++)
    {
        if(Arr[iCnt]==iNumber)
        {
            iFREQ=iCnt;
            
           

          
        }
    }
    return iFREQ;
    

 
 }

int main()
{
 int i = 0, iSize = 0;
 int *ptr = NULL;
 BOOL bRet = FALSE;
 int iNo = 0;


 printf("Enter Number of elements\n");
 scanf("%d",&iSize);

 ptr = (int *)malloc(iSize*sizeof(int));

 if(ptr==NULL)
 {
    printf("unable to allocate memory\n");
    return -1;
 }

 printf("Enter the elements:\n");

 for(i=0;i<iSize;i++)
 {
    scanf("%d",&ptr[i]);
 }


 printf("Enter the number that yoy want to check\n");
 scanf("%d",&iNo);
  bRet = LastOcc(ptr,iSize,iNo);

 printf("%d",bRet);



    return 0;
}
