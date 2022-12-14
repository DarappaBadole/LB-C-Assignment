#include<stdio.h>

void Number(int iNo)
{
    if(iNo<50)
    {
        printf("small");
    }

    if(100>iNo<50)
    {
        printf("medium");

    } 

    if(iNo>100)
    {
        printf("large");

    }
}
int main()
{
 int iValue = 0;
 printf("Enter number:");
 scanf("%d",&iValue);

 Number(iValue);


    return 0;

}