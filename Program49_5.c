// write a program which checks whether first and last bit is ONn or OFF


#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;

bool CheckBit(UINT No)
{
  
  UINT Mask = 0X80000001;
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
