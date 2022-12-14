/*
  input : 23 35
  output : 24 26 28 30 32 34

  input : 10 18
  output : 10 12 14 16 18

*/
#include<stdio.h>

 void RangeDisplayEven(int start,int end)
 {
   int iCnt=0;
   for(iCnt=start;iCnt<=end; iCnt++)
   {

      if(iCnt%2==0)
      {
       printf("%d\t",iCnt);
   }


   }





 }


int main()
{
 int iValue1 = 0 , iValue2 = 0;

 printf("Enter starting point\n ");
 scanf("%d",&iValue1);

 printf("Enter ending point\n ");
 scanf("%d",&iValue2);

 RangeDisplayEven(iValue1,iValue2);



    return 0;

}