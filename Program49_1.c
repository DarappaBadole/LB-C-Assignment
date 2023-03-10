//  write a program which checks whether 15th bit is ON or OFF

#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;

bool CheckBit(UINT No)
{
  
  UINT Mask = 8;
  UINT Result = 0;

  Result = No & Mask;

  if(Result == Mask)
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
    UINT Value =0;
    bool bRet = false;

    printf("Enter the value :\n");
    scanf("%d",&Value);

    bRet = CheckBit(Value);

    if(bRet==true)
    {
        printf("The 15th bit is ON\n ");

    }

    else
    {
        printf("15th bit is OFF\n");

        
    }


 















    return 0;
}