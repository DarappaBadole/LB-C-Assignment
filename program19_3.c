/*
 Input : irows = 3    iCol = 5

 Output : 5  4  3  2  1  
          5  4  3  2  1  
          5  4  3  2  1  
          5  4  3  2  1  
         


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

     for(j= iColumns ; j>0; j--)
     {
        printf("%d\t",j);
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