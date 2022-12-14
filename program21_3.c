/*
 Input : iRow  = 5     iCol  :  5


 Output : a  b  c  d  e
          1  2  3  4  5 
          a  b  c  d  e
          1  2  3  4  5 
          a  b  c  d  e
        


*/

#include<stdio.h>
 void Pattern(int iRow , int iCol)
 {
    int i=0, j=0;
  for(i=0;i<iRow;i++)
  {
     if(i%2==0)
     {
                char ch = 'a';
            for( j=0;j<iCol;j++)
            {
            
            printf("%c\t",ch);
            ch++;
            }
            
            printf("\n");
            }
     else
     {
            for(j=1;j<=iCol;j++)
            {
                printf("%d\t",j);
            }
            printf("\n");
     }

    
      
  }

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