/*
  input : 23  35

  output : 23 24 25 26 27 28 29 30 31 32 33 34 35

*/

#include<stdio.h>
 
 void RangeDisplay(int start,int end)
 {
   int iCnt = 0;
   if(start>end)
   {
      printf("invalid range");
      

   }
   for(iCnt=start; iCnt<=end;iCnt++)
   {
      printf("%d\t",iCnt);

   }



 }

int main()
{
  int iValue1 =0 , iValue2 = 0;
   
  printf("Enter starting point ");
  scanf("%d",&iValue1);

  printf("Enter ending point ");
  scanf("%d",&iValue2);

  RangeDisplay(iValue1,iValue2);



    return 0;

}