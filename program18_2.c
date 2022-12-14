 /*
  
   Input : 5 
   output : 5  # 4  #  3 # 2 # 1 #  

 */

#include<stdio.h>

void Pattern(int  iValue)
{
    int iCnt = 0;
   

    if(iValue<0)
    {
        iValue = -iValue;

    }

    for(iCnt = iValue ; iCnt>0;iCnt--)
    {
        printf("%d\t#\t",iCnt);
        
    }
}





int main()
{
  int iNo = 0;

  printf("Enter the number\n");
  scanf("%d",&iNo);

  Pattern(iNo);






return 0;

}