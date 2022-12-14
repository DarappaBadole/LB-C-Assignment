/*
input : 5.3
output : 88.2026

input : 10.4
output : 339.6224





*/

#include<stdio.h>
double CircleArea(float iNo)

{
    float PI =3.14f;
    double Ans = 0.0;
    
   Ans =  PI*iNo*iNo;

  return Ans;

}

int main()
{
 float fValue = 0.0f;
 double dRet = 0.0;

 printf("Enter radius");

 scanf("%f",&fValue);

 dRet=CircleArea(fValue);

 printf("Area is :%.4lf",dRet);







    return 0;

}