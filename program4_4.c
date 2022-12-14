//write a programm which accept number from user and display its summation of factors;


#include<stdio.h>

int AddFact(int no1)
{
int i = 0;
int Sum = 0;
for(i = 1; i<=no1/2; i++)
{

    if(( no1 % i )==0)
    {


        Sum = Sum + i;
    }
}
return Sum;

}


int main()
{


    int Value=0;
    int ret = 0;

    printf("Enter the number");
    scanf("%d",&Value);

    ret =AddFact(Value);

    printf("The Sum is %d ", ret);

    return 0;


}