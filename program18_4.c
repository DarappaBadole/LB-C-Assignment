/*
 Input :  4

 Output : # 1 * # 2 * # 3 * # 4 *

*/
#include<stdio.h>

void Pattern(int  iValue)
{
    int iCnt = 0;
   

    if(iValue<0)
    {
        iValue = -iValue;

    }

    for(iCnt =1 ; iCnt<=iValue;iCnt++)
    {
        printf("#\t%d\t*\t",iCnt);
        
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