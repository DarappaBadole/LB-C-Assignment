/*
 Input : iRow = 4     iCol = 3

 Output : *  *  * 
          *  *  *
          *  *  * 
          *  *  *


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

    for(i = 1 ; i<=iRows; i++)
    {

     for(j= 1 ; j<=iColumns; j++)
      printf("*\t");
        
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