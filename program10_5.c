/*
  input : 5
  output : 0.464515
                                    (1 square feet = 0.0929)
  input : 7
  output : 0.650321
*/

#include<stdio.h>
double SquareMeter(float iNo)
{

  
   return  (iNo * 0.0929);


}

int main()
{

 float iValue = 0.0;
 double dRet = 0.0;

 printf("Enter area in square feet ");
 scanf("%f",&iValue);

 dRet = SquareMeter(iValue);


 printf("%lf",dRet);



    return 0;

}