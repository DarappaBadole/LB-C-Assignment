#include<stdio.h>
#include<stdlib.h>

void Display(int Arr[],int iLength)
{
  int iCnt = 0;
  printf("Elements which are divisible by five are:\n");
  for(iCnt = 0;iCnt<iLength;iCnt++)
  {
    if(Arr[iCnt]%5==0)
    {
        printf(" %d \t ",Arr[iCnt]);
    }
    
    

  }


}

int main()
{
 int iSize = 0 ,  i=0;
 int *ptr = NULL;

 printf("Enter number of elements\n");
 scanf("%d",&iSize);

 ptr = (int *)malloc(iSize* sizeof(int));

 if(ptr==NULL)
 {
    printf("Unable to allocate memory\n");
    return -1;
 }

 printf("Enter the number of elements\n");
 for(i=0;i<iSize;i++)
 {
    scanf("%d",&ptr[i]);
 }

 Display(ptr , iSize);

 free(ptr);







    return 0;
}