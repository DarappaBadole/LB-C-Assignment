#include<stdio.h>

void Display(int iNo)
{
  int iCnt;


  
    //printf("%d",iCnt);
    while (iCnt<=iNo)
    {
       iCnt=iNo;
       
        printf("%d",iCnt);

        iCnt++;
    }
    

  }





int main()
{

 int iValue= 0;
 printf("Enter number\n");
 scanf("%d",&iValue);

 Display(iValue);




 return 0;

}