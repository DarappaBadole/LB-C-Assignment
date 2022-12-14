#include<stdio.h>


void Accept(int iNo)
{


    int i = 0;


    for(i = 1 ; i <= 5 ; i++)
    {


        printf("*\n",i);

    }
}

int main()
{


    int iValue = 0;

    printf("Enter the number ");
    scanf("%d",&iValue);

    Accept(iValue);
}