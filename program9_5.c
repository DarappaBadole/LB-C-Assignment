/*
   input : 5              (8 - 15 )
   output : -7
   
   input : -5
                        (8 -15)
   output : --7
*/ 

#include<stdio.h>

int FactorialDiff(int iNo)
{
  int i = 0;
  int even = 1;
  int odd = 1;

  for(i=1; i<=iNo ; i++)
  {
    if(i%2==0)
    {
     even = even*i;
    }

   else
        {
           odd = odd*i;
        }

  }
   
    return even - odd;

}



int main()
{ 
    int iValue = 0,  iRet = 0;

    printf("Enter number\n");
    scanf("%d",&iValue);

    iRet = FactorialDiff(iValue);

    printf("Factorial difference is : %d",iRet);


    return 0;

}