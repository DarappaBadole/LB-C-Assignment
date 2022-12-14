#include<stdio.h>

void Display(int iNo)
{
    if(iNo<0)
    {
        iNo=-iNo;
    }
    switch(iNo)
    {
    case 9:
    printf("Nine\n");

    break;


    case 3:

    printf("three\n");
    break;

    default:

    printf("invalid number\n");
    }
}

int main()
{
  int iValue = 0;
  printf("Enter Number");

  scanf("%d",&iValue);

  Display(iValue);







    return 0;

}