/*
 write a progamwhich accept number from user the cout of digits in between
 3 and 7

 input : 2395
 output : 2
 input :1018
 output :0

 input : 4521
 output : 2
 

 input : 9922
 output : 0

*/

#include<stdio.h>

int CountRange(int iNo)
{
    int iDigit = 0;
    int iCnt =0;

    while(iNo!=0)
    {
        iDigit = iNo %10;

        if((iDigit>=3) &&(iDigit<=7))
        {
            iCnt++;

        }
        iNo = iNo /10;

    }

    return iCnt;

}

int main()
{
  int iValue = 0;
  int iRet = 0;
  printf("Enter number\n  ");
  scanf("%d",&iValue);

   iRet = CountRange(iValue);

   printf("%d",iRet);





    return 0;

}