//Write a programm which Accept number from user and display all its non factors.

#include<stdio.h>

void NonFactors(int no)
{


    int i = 0;

    for (i = 1 ;i<=no; i++)
    {
if((no % i )!=0)
{

    printf("%d\n",i);
}

    }
}



int main()
{



    int value = 0;

    printf("Enetr the  Number");

    scanf("%d",&value);

    NonFactors(value);
    return 0;




}