/*
  Accept character from user and check whether it is alphabet or not
  (A-z a-z)

  INput : F
  output :True

  INput : &
  Output : False

  */
 #include<stdio.h>

 #define TRUE 1
 #define FALSE 0

 typedef int BOOL;

 BOOL ChkAlpha(char ch)
 {
    if((ch>='A') && (ch='Z') && (ch='a') && (ch='z'))
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

  bRet = ChkAlpha(cValue);
 
 if(bRet==TRUE)
 {
    printf("it is character\n");

 }

 else
 {
    printf("It is not character");
 }








    return 0;
 }
