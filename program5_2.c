//display factors in decreasing order;


#include<stdio.h>

void dorder(int no)
{


    int i = 0;

    for (i = no/2; i>=1; i--)
    {
if((no % i )==0)
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

    dorder(value);
    return 0;




}