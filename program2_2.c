#include<stdio.h>


void Accept(int iNo)
{

int i = 0;
     i = 1;


    while( i <=iNo ) 
    {


        printf("*\n",i);
        i++;

    }
}

int main()
{


    int iValue = 0;

    printf("Enter the number ");
    scanf("%d",&iValue);

    Accept(iValue);
}