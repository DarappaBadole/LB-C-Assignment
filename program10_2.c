/*
  input : 5.3   9.78
  output : 51.834
*/

#include<stdio.h>
double RectArea(float iNo1,float iNo2)
{
    float Area = 0.0;
    Area = iNo1 * iNo2;

    return Area;

}


int main()
{

 float fValue1= 0.0 , fValue2 = 0.0;
 double dRet = 0.0;

 printf("Enter width");
 scanf("%f",&fValue1);

 printf("ENter height");
 scanf("%f",&fValue2);

 dRet = RectArea(fValue1,fValue2);

 printf("%.4lf",dRet);






    return 0;

}