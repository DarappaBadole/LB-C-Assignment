/*
 input : 5
 output : 5000

 input : 12
 output : 12000

 */

#include<stdio.h>


 int KMtoMeter(int iNo)
 {
    int meter = 1000;
    meter = iNo*meter;

    return meter;
    
 }
int main()
{
    int iValue = 0;
    int iRet = 0;
    printf("Enter Distance");
    scanf("%d",&iValue);
    

    iRet = KMtoMeter(iValue);

    printf("%d",iRet);







    return 0;

}

