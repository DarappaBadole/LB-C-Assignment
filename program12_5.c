/*
 write a program which accept number from user and count frequency of 
 such a digit which is less than 6

 input: 2395
 output : 3

 input : 1018
 output : 3
  
  input :9440
  output : 3 

*/

#include<stdio.h>
 int Count(int iNo)
 {
   int iCnt = 0;
   int iDigit = 0;

   while(iNo!=0)
   {
     iDigit = iNo%10;

     if(iDigit<6)
     {
        iCnt++;

     }
     iNo = iNo / 10;

     
   }
   return iCnt;
   



 }






int main()
{
 int iValue = 0;
 int iRet = 0;

 printf("ENter number\n");
 scanf("%d",&iValue);

 iRet = Count(iValue);

 printf("%d",iRet);






    return 0;

}