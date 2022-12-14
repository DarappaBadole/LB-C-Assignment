/*

 input : 5
 output : 15        (5 * 3 * 1)

 input : -5
 output : 15      (5*3*1)

 input : 10
 output : 945    (9*7*5*3*1)

*/



#include<stdio.h>

int OddFactorial(int iNo)
{
  int iCnt = 0;
  int iMult =1;

  for(iCnt= 1; iCnt<=iNo;iCnt++)
  {
    if(iCnt%2!=0)
    {
        iMult = iMult*iCnt;

    }

  }

  return iMult;
}




  
int main()
{
  int iValue = 0;
  int iRet = 0;

  printf("Enter number\n");
  scanf("%d",&iValue);

  iRet = OddFactorial(iValue);

  printf("Odd factorial number is %d",iRet);







    return 0;
}