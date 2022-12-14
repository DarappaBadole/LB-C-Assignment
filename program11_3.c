/*

  write a program which accept range from user and return addition of all numbers
  in between that range (rang should be contains positive numbers only)


 input : 23  10
 output : 212

 input : 10  18
 output : 126

 input : -10 2
 output : invalid range

 input : 90 -18
 output :invalid range
*/

#include<stdio.h>

 int RangeSum(int start , int end)
 {
   int iCnt = 0;
   int iSum = 0;
  
      
      if(start<0||start>end)
  {
   return -1;

  }
   for(iCnt=start;iCnt<=end;iCnt++)
   {
      
   
     iSum = iSum+iCnt;
   }
  return iSum;
 
 }



int main()
{
  int iValue1 =0 , iValue2 = 0, iRet = 0;
  printf("Enter starting point ");
  scanf("%d",&iValue1);

  printf("Enter ending point ");
  scanf("%d",&iValue2);

  iRet = RangeSum(iValue1,iValue2);

  if(iRet==-1)
  {
    printf("invalid number\n");
  }
  else
  {

  printf("Addition is %d",iRet);

  }

    return 0;

}