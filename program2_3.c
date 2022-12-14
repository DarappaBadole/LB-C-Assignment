#include<stdio.h>

void Display(int No)
{


    if(No<=10)
    {

        printf("Hello");

    }
    else{


        printf("Demo");

    }
}

int main()
{



    int iValue = 0;

    printf("enter the number");
    scanf("%d",&iValue);


    Display(iValue);
    return 0;
}