/*
Display table in reverse

input: 2
outut = 20 18 16 14 12 10 8 6 4 2

*/
#include<stdio.h>
void TableRev(int iNo)
{
    int iCnt = 0;
    int itable = 0;
    for(iCnt=10; iCnt>=1;iCnt--)
    {
        itable = iNo*iCnt;
        printf("%d\t",itable);


    }
}
int main()
{
   int iValue = 0;

   printf("Enter number\n");
   scanf("%d",&iValue);

   TableRev(iValue);





    return 0;

}
