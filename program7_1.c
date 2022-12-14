#include<stdio.h>
void pattern(int iNo)
{
    int iCnt = 0;
     if(iNo<0)
     {
        iNo=-iNo;
     }
    for(iCnt<=0;iCnt<iNo;iCnt++)
    {
        printf("$");
        printf("*");
    }
}
int main()
{
 int iValue = 0;

 printf("Enter number\n");

 scanf("%d",&iValue);

 pattern(iValue);





    return 0;

}