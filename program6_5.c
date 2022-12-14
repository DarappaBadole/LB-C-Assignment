
#include<stdio.h>
float Percentage(float iNo1,float iNo2)
{
    int iPer = 0;

   iPer= (iNo2 / iNo1 )*100;

   return iPer;

}


int main()
{ 
    int iValue1=0,iValue2=0;
    float fRet = 0.0;

    printf("please enter total marks\n");
    scanf("%d",&iValue1);

    printf("please enter obtatined marks\n");
    scanf("%d",&iValue2);

    fRet = Percentage(iValue1,iValue2);
   printf("percentage is :%lf",fRet);




    return 0;

}