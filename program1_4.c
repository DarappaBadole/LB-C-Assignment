#include<stdio.h>
#include<stdbool.h>


bool Check(int no)
{


    if((no %5 )== 0)
    {

        return true;
    }
    else {
        return false;
    }
}

int main()
{


    int iValue = 0;
    bool bRet = false;


    printf("Enter the number");
    scanf("%d",&iValue);


    bRet = Check(iValue);

    if(bRet == true )
    {


        printf("Divisible by 5");

    }

    else{


        printf("Not divisible by 5");
    }
    return 0; 

}