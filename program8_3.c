//input : 5
//output =120

#include<stdio.h>

int Factor(int iNo)
{
    int iCnt = 0;
    int iFact = 1;

    for(iCnt = 1;iCnt<=iNo;iCnt++)
    {
        iFact = iFact *iCnt;

    }

    return iFact;

}

int main()
{
  int iValue = 0;
  int iRet = 0;

  printf("Enter Number\n");
  scanf("%d",&iValue);

  iRet = Factor(iValue);

 printf("%d",iRet);





    return 0;

}