/*
 Input : 8

 Output :  2 4 6 8 10 12 14 16

*/

#include<stdio.h>

void Pattern(int  iValue)
{
    int iCnt = 0;
    int iNo = 2;
   

    if(iValue<0)
    {
        iValue = -iValue;

    }

    for(iCnt =1 ; iCnt<=iValue;iCnt++)
    {
      printf("%d\t",iNo * iCnt);
        
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