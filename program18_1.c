/*
 Input : 5
 output : A B  C D E

*/
#include<stdio.h>

void Display(int  iValue)
{
    int iCnt = 0;
    char ch = 'A';

    if(iValue<0)
    {
        iValue = -iValue;

    }

    for(iCnt = 1 ; iCnt<=iValue;iCnt++)
    {
        printf("%c\t",ch);
        ch++;
    }
}





int main()
{
  int iNo = 0;

  printf("Enter the number\n");
  scanf("%d",&iNo);

  Display(iNo);






return 0;

}