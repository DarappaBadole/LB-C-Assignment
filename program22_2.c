/*
 INput : iRow = 4     iCol = 4
 Output :     *  *  *  *
              *  *  *  #
              *  *  #  #
              *  #  #  #

*/



#include<stdio.h>

void Pattern(int iRow ,int iCol)
{
    int i=0;
    int j=0;
    if(iRow!=iCol)
    {
        printf("number of rows and columns are not equal");
    }

    for(i=0;i<iRow;i++)
    {
        for(j=iCol;j>=1;j--)
        {
            if((i==j) || (i>j))
            {
                printf("#\t");
                
            }
            
            else
            {
                printf("*\t");
            }
            
        }
        printf("\n");
    }
    
  
    
     
}




int main()
{

 int iValue1=0;
 int iValue2 = 0;
 printf("Enter number of rows\n");
 scanf("%d",&iValue1);

 printf("Enter number of Columns\n");
 scanf("%d",&iValue2);


 Pattern(iValue1 ,iValue2);







    return 0;
}