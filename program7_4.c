#include<stdio.h>
void OddDisplay(int iNo)
{
    int iCnt = 0;

    for( iCnt = 1;iCnt<iNo;iCnt=iCnt+2)
    {
        printf(" %d ",iCnt);
    }
}


int main()
{
  int iValue  = 0;
  printf("Enyter the number\n");
  scanf("%d",&iValue);

  OddDisplay(iValue);







    return 0;

}