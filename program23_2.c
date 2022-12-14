/*
  Accept character from user and check whether it is capital or not
  

  INput : F
  output :True

  INput : d
  Output : False

  */
 #include<stdio.h>

 #define TRUE 1
 #define FALSE 0

 typedef int BOOL;

 BOOL Capital(char ch)
 {
    if((ch>='A')&&(ch<='Z'))
    {
        return TRUE;

    }

    else
    {
        return FALSE;

    }
 }
 int main()
 {
  
  char cValue = '\0';
  BOOL bRet = FALSE;

  printf("Enter the character\n");
  scanf("%c",&cValue);

  bRet = Capital(cValue);
 
 if(bRet==TRUE)
 {
    printf("it is capital\n");

 }

 else
 {
    printf("It is not capital");
 }








    return 0;
 }
