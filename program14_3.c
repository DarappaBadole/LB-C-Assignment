//Accept N number from user and display all such elements which are even and divisible by 5

#include<stdio.h>
#include<stdlib.h>

void Display(int Arr[],int iLength)
{
    int iCnt = 0;
    for(iCnt=0; iCnt<iLength ; iCnt++)
    {
        if((Arr[iCnt] % 2 ==0) && (Arr[iCnt]%5==0))
        {
            printf("output :%d",Arr[iCnt]);
        }
    }
}

int main()
{

 int i = 0 , iRet = 0 , iSize = 0;
 int *ptr = NULL;

 printf("Enter Number of elements\n");
 scanf("%d",&iSize);

 ptr = (int *)malloc(iSize * sizeof(int));

 if(ptr==NULL)
 {
    printf("unable to allocate memory\n");
    return -1;
 }
 printf("enter elements:\n");
 
 printf("Enter the number of elements\n");
 for(i=0;i<iSize;i++)
 {
    scanf("%d",&ptr[i]);
 }


 Display(ptr,iSize);







    return 0;

}