#include<stdio.h>

void Display(char ch)
{
    if((ch>='A')&&(ch<='Z'))
    {
        printf("Decimal is:%d\n",ch);
        printf("Decimal is:%o\n",ch);
        printf("Decimal is:%x\n",ch);
    }
    
}


int main()
{
  char cValue = '\0';
  
  printf("Enter the character");
  scanf("%c",&cValue);

  Display(cValue);









    return 0;

}