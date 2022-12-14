/*
 input : 2395
 output : there is no zero

 input : 1018
 output : it contains zero

 input : 9000
 output : it contains zero

*/

#include<stdio.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkZero(int iNo)
{
  int iDigit = 0;
   while(iNo!=0)
   {

      
      iDigit = iNo %10;
       //printf("%d",iDigit);

      if(iDigit==0)
       {
        return TRUE;

       }

       iNo = iNo / 10;

   
     }

      return FALSE;
      


}






int main()
{
 int iValue = 0;
 BOOL bRet = FALSE;

 printf("Enter number\n");
 scanf("%d",&iValue);

 bRet = ChkZero(iValue);

  if(bRet==TRUE)
  {
    printf("it contains zero\n");

  }

  else
  {
    printf("there is no zero\n");

  }





    return 0;

}