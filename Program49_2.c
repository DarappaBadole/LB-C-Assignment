// write a program which checks whether 5th and 18 bit is ON or OFF

#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;

bool CheckBit(UINT No1)
{
  UINT Mask = 0X00020010;
  UINT Result = 0;

  Result = (No1 & Mask );

  if(Result == Mask )
  {
    return true;

  }

  else
  {
    return false;

  }








}



int main()
{
 
 UINT iValue1 = 0;
 bool bRet = false;

 printf("Enter the first number:\n");
 scanf("%d",&iValue1);

 

 bRet = CheckBit(iValue1);

 if(bRet==true)
 {
    printf("Both the bits are ON\n");

 }

 else
 {
    printf("Both the bits are OFF\n");

 }












    return 0;
}