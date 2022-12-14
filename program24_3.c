#include<stdio.h>
void Display(char ch)
{
    int iCnt =0;
    int j=0;
    if((ch>='A')&&(ch<='Z'))
    {

        for(iCnt=ch;iCnt<='Z';iCnt++)
        {
            printf("%c\t",iCnt);
        
        }


    }
    else
    {
       for(j=ch;j>='a';j--)
        {
            printf("%c\t",j);
        
        }

    }



}



int main()
{

 char cValue = '\0';
 printf("Enter th echarcter\n");
 scanf("%c",&cValue);

 Display(cValue);













    return 0;
}