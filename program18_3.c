 /*
  
   Input : 5
   
   Output : 1 * 2 * 3 * 4 * 5 * 

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
        printf("%d\t*\t",iCnt);
        
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