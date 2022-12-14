/*
 input : 10
 output : 700

 input : 3
 output : 210

 input : 1200
 output :84000

*/
#include<stdio.h>
int DollarToINR(int iNo)
{   
    int iAns = 0;
    int Rupee = 70;

    iAns = iNo*Rupee;

    return iAns;

}

int main()
{
  int iValue = 0 ,iRet = 0;

  printf("Enter number of USD\n");
  scanf("%d",&iValue);

  iRet = DollarToINR(iValue);


  printf("%d",iRet);









    return 0;

}