/*
 Input : iRows = 4      iCol = 4

 Output :  A  B  C  D
           a  b  c  d
           A  B  C  D
           a  b  c  d

*/
#include<stdio.h>

void Pattern(int iRows , int iColumns)
{
    int i = 0;
    int j = 0;
    

    if(iRows<0)
    {
        iRows = -iRows;

    }

    if(iColumns<0)
    {
        iColumns=- iColumns;
    }

    for(i = 0 ; i<iRows; i++)
    {
        if(i%2==0)
        {

          char ch = 'A';
          for(j=1;j<=iColumns;j++)
          {

            printf("%c\t",ch);
            ch++;
          }
        
     
        }

        else
        {
            char ch1 = 'a';


      
            for(j= 1 ; j<=iColumns; j++)
            {
               
            printf("%c\t",ch1);
            
            ch1++;
            }


        }
        printf("\n");
       
      
       
    
     } 
     
     
     
      
        
    }



int main()
{
  int iNo1 = 0;
  int iNo2 = 0;

  printf("Enter the number of rows \n");
  scanf("%d",&iNo1);


  printf("Enter the number of columns\n");
  scanf("%d",&iNo2);



  Pattern(iNo1, iNo2);






return 0;

}