/*
 Input : iRow  = 4      iCol  :  4


 Output :  1  2  3  4  
           5  6  7  8 
           9  1  2  3
           4  5  6  7

*/

#include<stdio.h>
 void Pattern(int iRow , int iCol)
 {
    int iCnt=1;
    int j=0;
  for(int i=0;i<=iRow;i++)
  {
     if(i%2==0)
       {
        printf("%d",(i+1)*2);
         
       


  
       
     for( j=0;j<=iCol;j++)
    {
       
        printf("%d",i+2);
      
      
          
    }
     
       }
       
      

  



  }
  printf("\n");


 }






int main()
{

  int iValue1 =0, iValue2=0;
  printf("Enter the number of rows \n");
  scanf("%d",&iValue1);
  

  printf("Enter the number of columns\n");
  scanf("%d",&iValue2);

  

  Pattern(iValue1,iValue2);










 return 0;
}