// write a program which accept one number from user and OFF 7th  and 10th  bit of that Number if it is ON
//  and return modified Number

// Input : 577
// output : 1

#include<stdio.h>
typedef unsigned int UINT;

int OffBit(UINT No)
{
    UINT Mask = 0X00000240;
    UINT Result = 0;



    Result = No ^ Mask;

    return Result;


}

int main()
{
 UINT iValue = 0;
 int  iRet = 0;

 printf("Enter the number:\n");
 scanf("%d",&iValue);

 iRet = OffBit(iValue);

 printf("The modified number is %d ",iRet);












    return 0;
}