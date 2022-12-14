/*
  input : 5
  output : 8

  input : -5
  output : 8






*/

#include<stdio.h>



int EvenFactorial(int iNo)
{
  int iCnt = 0;
  int iMult = 1;
  int iSum=1;


  for(iCnt = 1; iCnt<=iNo;iCnt++)

  {
    if(iCnt%2==0)
    {
     iSum = iSum * iCnt;
    }
  }
  return iSum;




}
int main()
{
  int iValue = 0;
  int iRet = 0;

  printf("Enter number\n");
  scanf("%d",&iValue);

  iRet = EvenFactorial(iValue);

  printf("Even factorial of given number is :%d",iRet);

  




    return 0;

}