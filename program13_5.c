/*

write  a program which accept number from user and return difference 
between summation of even digit and odd digit






*/


#include<stdio.h>



int CountDiff(int iNo)
{
  int iDigit = 0;
  int iEvenCnt = 0;
  int iEvenSum = 0;
  int iOddSum = 0;
  
  while(iNo!=0)
  {

    iDigit= iNo %10;
    if(iDigit%2==0)
    {
       iEvenSum = iEvenSum + iDigit;

    }

    else
    {
        iOddSum = iOddSum+iDigit ;

    }
    iNo = iNo / 10;
    

  }

  return iEvenSum-iOddSum;


}
int main()
{

 int iValue = 0;
 int iRet = 0;
 
 printf("Enter the number\n");
 scanf("%d",&iValue);

 iRet = CountDiff(iValue);


 printf("%d",iRet);



    return 0;
}