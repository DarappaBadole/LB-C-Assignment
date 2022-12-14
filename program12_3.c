/*
 input : 2395
 output : 1

 input : 1018
 output : 0

 input : 9000
 output : 0

 input : 922432
 output : 3

*/

#include<stdio.h>
 int CountTwo(int iNo)
 {
    int iDigit = 0;
    int iCnt = 0;



    while(iNo!=0)
    {
        iDigit = iNo %10;

        if(iDigit==2)
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

  printf("Enter number\n");
  scanf("%d",&iValue);

  iRet = CountTwo(iValue);

  printf("%d",iRet);









    return 0;

}