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

 BOOL ChkSmall(char ch)
 {
    if((ch>='a')&&(ch<='z'))
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

  bRet = ChkSmall(cValue);
 
 if(bRet==TRUE)
 {
    printf("it is small\n");

 }

 else
 {
    printf("It is not small");
 }








    return 0;
 }
