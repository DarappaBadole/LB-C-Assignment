// write a program which checks whether 7th & 15th , 21th and 28th is ON or OFf


#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;

bool CheckBit(UINT No)
{
  
  UINT Mask = 0X08104040
  ;
  UINT Result = 0;

  Result = No & Mask;

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
  
  UINT iValue = 0;
  bool bRet = 0;


  printf("Enter the value :\n");
  scanf("%d",&iValue);

  bRet = CheckBit(iValue);

  if(bRet == true)
  {
    printf("above bits are ON\n");

  }

  else
  {
    printf("All bits are OFF\n");
  }




  


    return 0;

}
