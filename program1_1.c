#include<stdio.h>
int Divide(int iNo1, int iNo2)
{

int Ans = 0;

if((iNo2 % iNo1)!=0)
{


    return -1;
}

Ans = iNo1/iNo2;

return Ans;

}

int main()
{


    int iValue1 = 15 , iValue2 = 5;
    int iRet = 0;

    iRet = Divide(iValue1,iValue2);


    printf("Division Is %d \n",iRet);
    return 0;
}