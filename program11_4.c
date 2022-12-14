/*
   input : 23  30
   output : 108

   input : 10 18
   output : 70

   input : -10 2
   output : invalid number


  input : 90 18
  output: invalid number


*/

#include<stdio.h>
 int RangeSumEven(int iStart,int iEnd)
 { 
     int iCnt = 0;
     int iSum = 0;
         
     if(iStart<0||iStart>iEnd)
     {
       return  -1;
     }

     for(iCnt=iStart; iCnt<=iEnd; iCnt++)
     {
        if(iCnt%2==0)
        {
          iSum = iSum + iCnt;

        }
    
     }

     return iSum;
 }


int main()
{ 
  int iValue1 = 0,iValue2 = 0, iRet = 0;

  printf("Enter starting point \n");
  scanf("%d",&iValue1);

  printf("Enter ending point\n");
  scanf("%d",&iValue2);

  iRet = RangeSumEven(iValue1,iValue2);

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