/*
 write a program which accept range from user and display all number in between 
 that range in reverse order

 input : 23  35
 output : 35 34 33 32 31 30 29 28 27 26 25 24 23

 input : -10 10
 output : 10 

 input : 90 18
 output : invalid number 


*/

#include<stdio.h> 
void RangeDisplayRev(int start,int end)

{
 if(start<0)
 {
   start=-start;
   
 }
 

  if(start>end)
  {
    printf("invalid number\n");

  }
  int iCnt = 0;
  for(iCnt=end;iCnt>=start;iCnt--)
  {
    printf("%d\t",iCnt);
  }

}



int main()
{

  int iValue1 = 0 , iValue2 = 0;
  printf("Enter  starting point\n");
  scanf("%d",&iValue1);

  printf("Enter ending point\n");
  scanf("%d",&iValue2);

  RangeDisplayRev(iValue1,iValue2);








    return 0;
}