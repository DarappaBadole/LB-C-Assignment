//write a programm which accept number from user and return diff between sum of all its factors and non factors;
#include<stdio.h>
int Difference(int value)
{


    int sumfac = 0;
    int sumnfac= 0;
    int i = 0;
    int diff= 0;

    for (i = 1 ; i<= value/2 ; i ++)
    {


        if((value % i )==0)
        {

            sumfac = sumfac+i;

        }
    }
    

    printf("The addition of factors is %d :\n",sumfac);

     for (i = 1 ; i<= value ; i ++)
    {


        if((value % i )!=0)
        {

            sumnfac = sumnfac+i;

        }
    }
    printf("The add of non factors  is %d :\n",sumnfac);

    diff = sumfac-sumnfac;

    return diff;
}



int main()
{


    int no = 0;
    int iret = 0;


    printf("Enter the number :");

    scanf("%d",&no);

    iret = Difference(no);

    printf("The diffrence is %d",iret);



    return 0;

}