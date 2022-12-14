/*

 write a program which accept number from user and return the count of 
 odd digits

 input : 2395
 output : 3

 input : 1018
 output : 2

 input : -1018
 output  : 2

 input : 8462
 output : 0

*/

#include<stdio.h>
 int CountOdd(int iNo)
 {
   int iDigit = 0;
   int iCnt = 0;

   while(iNo!=0)
   {
    iDigit =iNo %10;

    if((iDigit %2)!=0)
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

 printf("ENter number\n");
 scanf("%d",&iValue);

 iRet = CountOdd(iValue);

 printf("%d",iRet);






    return 0;

}