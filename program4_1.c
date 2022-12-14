//write a programm which accept number from user and display its multiplication of factors;


#include<stdio.h>

int MultFact(int no1)
{
int i = 0;
int mult = 1;
for(i = 1; i<=no1/2; i++)
{

    if(( no1 % i )==0)
    {


        mult = mult * i;
    }
}
return mult;

}


int main()
{


    int Value=0;
    int ret = 0;

    printf("Enter the number");
    scanf("%d",&Value);

    ret =MultFact(Value);

    printf("The multiplication is %d ", ret);

    return 0;


}