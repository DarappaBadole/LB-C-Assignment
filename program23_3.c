/*
  Accept character from user and check whether it is digit or not
  

  INput : 7
  output :True

  INput : d
  Output : False

  */
 #include<stdio.h>

 #define TRUE 1
 #define FALSE 0

 typedef int BOOL;

 BOOL ChkDigit(char ch)
 {
    if((ch>='0')&&(ch<='9'))
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

  bRet = ChkDigit(cValue);
 
 if(bRet==TRUE)
 {
    printf("it is Digit\n");

 }

 else
 {
    printf("It is not Digit");
 }








    return 0;
 }
