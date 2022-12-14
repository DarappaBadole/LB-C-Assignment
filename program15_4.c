//Accept number from user check whether that number contains 11 in it or not

/* Accept N number from user and return frequency of even number
 
 Input : N  : 6

        Elements: 85  66  3  80  93  88

 Output:  3


*/

#include<stdio.h>
#include<stdlib.h>


typedef int BOOL;

int Frequency(int Arr[],int iLength)
 {
    int iCnt = 0  ,iFrequency = 0;

    for(iCnt = 0; iCnt<iLength;iCnt++)
    {
        if(Arr[iCnt]==11)
        {
             iFrequency++;

        }
    }
    return iFrequency;
    
 
 }

int main()
{
 int i = 0, iSize = 0;
 int *ptr = NULL , iRet = 0;
 


 printf("Enter Number of elements\n");
 scanf("%d",&iSize);

 ptr = (int *)malloc(iSize*sizeof(int));

 if(ptr==NULL)
 {
    printf("Unable to allocate memory\n");
    return -1;
 }

 printf("Enter the elements:\n");

 for(i=0;i<iSize;i++)
 {
    scanf("%d",&ptr[i]);
 }
 iRet = Frequency(ptr,iSize);

 printf(" output :%d\t",iRet);


 free(ptr);






    return 0;
}
