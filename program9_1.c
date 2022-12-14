/*
  input: 5
  output: * *  * * * # # # # # 

  input : 6
  output: * * * * * * # # # # # # 

  input: -5 
  output: * * * * * # # # # # 

  input : 2
  output : * * # #
       
*/

#include<stdio.h>

void Display(int iNo)
{  

    if(iNo<0)
    {
        iNo = -iNo;
        
    }
    int iCnt=0;
  for(iCnt=1;iCnt<=iNo;iCnt++)
  {
    printf("*\t");

  }
  for(iCnt=1;iCnt<=iNo;iCnt++)
  {
    printf("#\t");

  }


}




int main()
{

 int iValue = 0;
 printf("Enter Number:\n");

 scanf("%d",&iValue);

 Display(iValue);






    return 0;

}