//input : 2
//output : 2 4 6 8 10 12 14 16 18 20

/*table:
2*1
2*2          for(iCnt=1;iCnt<=10;iCnt++)
2*3              {
2*4                iTable= iNo*icnt;
2*5             }
2*6
2*7
2*8
2*9
2*10
*/

#include<stdio.h>

void Table(int iNo)
{
   int iCnt = 0;
   int iTable= 0;

   for(iCnt=1; iCnt<=10;iCnt++)
   {
       iTable= iNo*iCnt;

       printf("%d\n",iTable);

   }
}

int main()
{
    int iValue = 0;
    printf("Enter NUmber");
    scanf("%d",&iValue);

    Table(iValue);





    return 0;

}