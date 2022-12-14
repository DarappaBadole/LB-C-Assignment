/* Accept N number from user and return frequency of even number
 
 Input : N  : 6

        Elements: 85  66  3  80  93  88

 Output:  3


*/

#include<stdio.h>
#include<stdlib.h>

 int CountEven(int Arr[],int iLength)
 {
    int iCnt = 0 ,iEvenCnt = 0;

    for(iCnt = 0; iCnt<iLength;iCnt++)
    {
        if(Arr[iCnt]%2==0)
        {
            iEvenCnt++;
        }
    }

    return iEvenCnt;
 }

int main()
{
 int i = 0, iSize = 0;
 int *ptr = NULL , iRet = 0;


 printf("Enter Number of elements\n");
 scanf("%d",&iSize);

 ptr = (int *)malloc(iSize*sizeof(int));

 printf("Enter the elements:");

 for(i=0;i<iSize;i++)
 {
    scanf("%d",&ptr[i]);
 }
 iRet = CountEven(ptr,iSize);


 printf("Result is:%d",iRet);

 free(ptr);






    return 0;
}
