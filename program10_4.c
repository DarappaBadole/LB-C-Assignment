/*
 input : 10
 output : -12.2222        ( 10 - 32 ) * (5/9)

 input : 34
 output : 1.11111 

*/

#include<stdio.h>

double FhtoCs(float  iNo)
{
  double cel = 0.0;
  
    cel = (iNo-32 )* 5/9;

    return cel;

}
int main()
{
  float fValue  = 0.0f;
  double dRet = 0.0;

  printf("Enter tempreture in Fahrenheit");
  scanf("%f",&fValue);

  dRet = FhtoCs(fValue);

  printf(" %lf",dRet);





  return 0 ;


}