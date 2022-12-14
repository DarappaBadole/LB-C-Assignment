//Write a programm which aceept one number from user and print that number of even number on screen

#include<stdio.h>

void PrintEven(int iNo)



{


    int i = 0;
    for (i = 1;i <=iNo*2; i++)
    {

        if((i% 2)==0)
        {

printf("%d\t",i);
        }
    }
}

int main()
{


    int iValue = 0;

    printf("Enter the number ");
    scanf("%d",&iValue);

    PrintEven(iValue);

    return 0;    
}